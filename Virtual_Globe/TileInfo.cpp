
#include "TileInfo.h"

//判定该瓦片文件是否存在
bool TileInfo_Grid::IsTileFileExist() { return false; }

//返回瓦片信息
FString TileInfo_Grid::TileToString() { return FString(); }

//获取该瓦片的实际物理磁盘路径
FString TileInfo_Grid::GetTileDiskPath() { return FString(); }

FString TileInfo_Grid::GetBasePath() { return FString(); }

//代表空瓦片的构造函数
TileInfo_Grid::TileInfo_Grid()
{
	this->LevelNum = -1;
	this->Row = -1;
	this->Col = -1;
}

//判断当前瓦片是否是合法瓦片
bool TileInfo_Grid::IsTileValid()
{
	if (this->LevelNum == -1 && this->Row == -1 && this->Col == -1)
		return false;
	return true;
}

//判断两个瓦片是否是同一个瓦片
bool TileInfo_Grid::Equal(TileInfo_Grid *other)
{
	if (this->LevelNum == other->LevelNum && this->Row == other->Row && this->Col == other->Col)
		return true;
	return false;
}

TileInfo_Grid::TileInfo_Grid(const int32 levelNum, const int32 row, const int32 col)
{
	this->LevelNum = levelNum;
	this->Row = row;
	this->Col = col;

	if (this->LevelNum == -1)
		return;

	double tileGridSize = GetTileGridSize();

	this->DownLeftPt = FVector2D(GeographicGridOriginPt.X + col * tileGridSize, GeographicGridOriginPt.Y + row * tileGridSize);

	this->UpRightPt = FVector2D(GeographicGridOriginPt.X + (col + 1)*tileGridSize, GeographicGridOriginPt.Y + (row + 1)*tileGridSize);
} 

FVector2D TileInfo_Grid::GetTileMin()
{
	return this->DownLeftPt;
}

FVector2D TileInfo_Grid::GetTileMax()
{
	return this->UpRightPt;
}

double TileInfo_Grid::GetTileGridSize()
{
	return 180.0 / FMath::Pow(2.0, LevelNum);
}

//返回整个椭球范围内，该层级瓦片的总行数
int32 TileInfo_Grid::GetTileRowCountInGlobe()
{
	return FMath::Pow(2.0, LevelNum);
}

//返回整个椭球范围内，该层级瓦片的总列数
int32 TileInfo_Grid::GetTileColCountInGlobe()
{
	return FMath::Pow(2.0, LevelNum + 1);
}

bool TileInfo_Grid::IsPositionIn(FVector testPt)
{
	if (testPt.X < this->DownLeftPt.X || testPt.X > this->UpRightPt.X
		|| testPt.Y < this->DownLeftPt.Y || testPt.Y > this->UpRightPt.Y)
		return false;
	return true;
}

bool TileInfo_Grid::IsPositionIn(FVector2D testPt)
{
	if (testPt.X < this->DownLeftPt.X || testPt.X > this->UpRightPt.X
		|| testPt.Y < this->DownLeftPt.Y || testPt.Y > this->UpRightPt.Y)
		return false;
	return true;
}

bool TileInfo_Grid::IsGeoRangeIntersect(TArray<FVector2D> geoRange)
{	
	for (FVector2D geoRangePt : geoRange)
	{
		if (IsPositionIn(geoRangePt))
			return true;
	}
	return false;
}


//返回该瓦片的四个子瓦片构成的数组
// 01
// 23
void TileInfo_Grid::GetChildren(TArray<TileInfo_Grid>& children)
{
	//若当前瓦片为空，直接返回
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;
	
	//添加西北角子瓦片
	children.Add(TileInfo_Grid(this->LevelNum + 1, this->Row * 2 + 1, this->Col * 2));

	//添加东北角子瓦片
	children.Add(TileInfo_Grid(this->LevelNum + 1, this->Row * 2 + 1, this->Col * 2 + 1));

	//添加西南角子瓦片
	children.Add(TileInfo_Grid(this->LevelNum + 1, this->Row * 2, this->Col * 2));

	//添加东南角自瓦片
	children.Add(TileInfo_Grid(this->LevelNum + 1, this->Row * 2, this->Col * 2 + 1));
}

//返回当前瓦片的父瓦片
//若当前瓦片为0级瓦片，父瓦片为空瓦片
TileInfo_Grid TileInfo_Grid::GetParent()
{
	TileInfo_Grid result_TileInfo_Grid = TileInfo_Grid();
	//返回空瓦片
	if (this->LevelNum == 0)
	{		
		return result_TileInfo_Grid;
	}
		
	result_TileInfo_Grid = TileInfo_Grid(this->LevelNum - 1, FMath::FloorToInt(this->Row / 2), FMath::FloorToInt(this->Col / 2));

	return result_TileInfo_Grid;
}

TileInfo_Grid TileInfo_Grid::GetTileByLevelNumAndCoord(int32 thisLevelNum, Geographic2D Coordinate)
{
	int rowNum = pow(2, thisLevelNum);
	// 根据输入点，确定该点所属行列号，
	int Col = Coordinate.Longitude  * (2 * rowNum) / (2 * PI) + rowNum; // lon
	int Row = Coordinate.Latitude * rowNum / PI + rowNum / 2.0;   // lat
	
	return TileInfo_Grid(thisLevelNum, Row, Col);
}


//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的八邻域瓦片的描述信息
//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
//      012
//      3*4
//      567	
void TileInfo_Grid::GetNeighbor_8(TArray<TileInfo_Grid>& neighbor_8)
{
	neighbor_8.AddDefaulted(8);
	//若当前tile为空tile，返回空邻域
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	if (this->Row != (GetTileRowCountInGlobe() - 1))
	{
		if (this->Col != 0)
		{
			neighbor_8[0] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col - 1);
			neighbor_8[3] = TileInfo_Grid(this->LevelNum, this->Row, this->Col - 1);
		}			
		else
		{
			neighbor_8[0] = TileInfo_Grid(this->LevelNum, this->Row + 1, GetTileColCountInGlobe() - 1);
			neighbor_8[3] = TileInfo_Grid(this->LevelNum, this->Row, GetTileColCountInGlobe() - 1);
		}

		neighbor_8[1] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col);

		if (this->Col != GetTileColCountInGlobe() - 1)
		{
			neighbor_8[2] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col + 1);
			neighbor_8[4] = TileInfo_Grid(this->LevelNum, this->Row, this->Col + 1);
		}
		else
		{
			neighbor_8[2] = TileInfo_Grid(this->LevelNum, this->Row + 1, 0);
			neighbor_8[4] = TileInfo_Grid(this->LevelNum, this->Row, 0);
		}
	}
	else if (this->Row != 0)
	{
		if (this->Col != 0)
		{
			neighbor_8[5] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col - 1);				
		}
		else
		{
			neighbor_8[5] = TileInfo_Grid(this->LevelNum, this->Row - 1, GetTileColCountInGlobe() - 1);			
		}

		neighbor_8[6] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col);

		if (this->Col != GetTileColCountInGlobe() - 1)
		{
			neighbor_8[7] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col + 1);			
		}
		else
		{
			neighbor_8[7] = TileInfo_Grid(this->LevelNum, this->Row - 1, 0);			
		}
	}
}



//基于当前瓦片，返回紧邻的三个瓦片，并且紧邻三个瓦片和本瓦片共同构成上一级的父瓦片
//可能情况：*为本瓦片
//   *0       0*       01       01
//   12       12       *2       2*
void TileInfo_Grid::GetNeighbor_3(TArray<TileInfo_Grid>& neighbor_3)
{
	//neighbor_3.AddDefaulted(3);

	TArray<TileInfo_Grid> all4ChildrenTileFromParent;
	this->GetParent().GetChildren(all4ChildrenTileFromParent);
	if (all4ChildrenTileFromParent.Num() == 4)
	{		
		for (int i = 0; i < all4ChildrenTileFromParent.Num(); i++)
		{
			if (this->Equal(&all4ChildrenTileFromParent[i]))
				continue;
			else
				neighbor_3.Add(all4ChildrenTileFromParent[i]);
		}
	}	
}


//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的四邻域瓦片的描述信息
//具体邻域情况如下图所示，*为本瓦片，+为邻域瓦片
//       0    
//      1*2    
//       3 	 
void TileInfo_Grid::GetNeighbor_4(TArray<TileInfo_Grid>& neighbor_4)
{
	neighbor_4.AddDefaulted(4);
	//若当前tile为空tile，返回空邻域
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	if (this->Row != (GetTileRowCountInGlobe() - 1))
		neighbor_4[0] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->Col);

	if (this->Col != 0)
		neighbor_4[1] = TileInfo_Grid(this->LevelNum, this->Row, this->Col - 1);
	else
		neighbor_4[1] = TileInfo_Grid(this->LevelNum, this->Row, GetTileColCountInGlobe() - 1);

	if (this->Col != GetTileColCountInGlobe() - 1)
		neighbor_4[2] = TileInfo_Grid(this->LevelNum, this->Row, this->Col + 1);
	else
		neighbor_4[2] = TileInfo_Grid(this->LevelNum, this->Row, 0);

	if (this->Row != 0)
		neighbor_4[3] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->Col);	
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



//基于本瓦片描述信息，四叉树编码规则，返回本瓦片的15邻域瓦片的描述信息
//具体邻域情况如下图所示，*为本瓦片，数字为邻域瓦片
//      0   1  2  3    0   1  2  3    0   1  2  3    0   1  2  3
//      4   *  5  6    4   5  *  6    4   5  6  7    4   5  6  7      
//      7   8  9 10    7   8  9 10    8   *  9 10    8   9  * 10
//      11 12 13 14    11 12 13 14    11 12 13 14    11 12 13 14
void TileInfo_Grid::GetNeighbor_15(TArray<TileInfo_Grid>& neighbor_15)
{
	neighbor_15.AddDefaulted(15);
	//若当前tile为空tile，返回空邻域
	if (this->Row == -1 && this->Col == -1 && this->LevelNum == -1)
		return;

	//若当前tile层数太低，无法构建15邻域兄弟瓦片
	if (this->LevelNum <= 3)
		return;

	//1.若当前瓦片在globe边缘
	//1.1 若当前瓦片在globe顶行
	if (this->Row == this->GetTileRowCountInGlobe() - 1)
	{
		//1.1.1且当前瓦片在globe首列
		if (this->Col == 0)
		{
			neighbor_15[8] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 2);
			neighbor_15[9] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 1);
			neighbor_15[10] = TileInfo_Grid(this->LevelNum, this->Row, 1);
			neighbor_15[11] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->GetTileColCountInGlobe() - 2);
			neighbor_15[12] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->GetTileColCountInGlobe() - 1);
			neighbor_15[13] = TileInfo_Grid(this->LevelNum, this->Row - 1, 0);
			neighbor_15[14] = TileInfo_Grid(this->LevelNum, this->Row - 1, 1);
		}
		//1.1.2且当前瓦片在globe尾列
		else if (this->Col == this->GetTileColCountInGlobe() - 1)
		{
			neighbor_15[8] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 2);
			neighbor_15[9] = TileInfo_Grid(this->LevelNum, this->Row, 0);
			neighbor_15[10] = TileInfo_Grid(this->LevelNum, this->Row, 1);
			neighbor_15[11] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->GetTileColCountInGlobe() - 2);
			neighbor_15[12] = TileInfo_Grid(this->LevelNum, this->Row - 1, this->GetTileColCountInGlobe() - 1);
			neighbor_15[13] = TileInfo_Grid(this->LevelNum, this->Row - 1, 0);
			neighbor_15[14] = TileInfo_Grid(this->LevelNum, this->Row - 1, 1);
		}
		return;
	}
	//1.2 若当前瓦片在globe首行
	else if (this->Row == 0)
	{
		//1.2.1且当前瓦片在globe首列
		if (this->Col == 0)
		{
			neighbor_15[0] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->GetTileColCountInGlobe() - 2);
			neighbor_15[1] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->GetTileColCountInGlobe() - 1);
			neighbor_15[2] = TileInfo_Grid(this->LevelNum, this->Row + 1, 0);
			neighbor_15[3] = TileInfo_Grid(this->LevelNum, this->Row + 1, 1);
			neighbor_15[4] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 2);
			neighbor_15[5] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 1);
			neighbor_15[6] = TileInfo_Grid(this->LevelNum, this->Row, 1);
		}
		//1.2.2且当前瓦片在globe尾列
		else if (this->Col == this->GetTileColCountInGlobe() - 1)
		{
			neighbor_15[0] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->GetTileColCountInGlobe() - 2);
			neighbor_15[1] = TileInfo_Grid(this->LevelNum, this->Row + 1, this->GetTileColCountInGlobe() - 1);
			neighbor_15[2] = TileInfo_Grid(this->LevelNum, this->Row + 1, 0);
			neighbor_15[3] = TileInfo_Grid(this->LevelNum, this->Row + 1, 1);
			neighbor_15[4] = TileInfo_Grid(this->LevelNum, this->Row, this->GetTileColCountInGlobe() - 2);
			neighbor_15[5] = TileInfo_Grid(this->LevelNum, this->Row, 0);
			neighbor_15[6] = TileInfo_Grid(this->LevelNum, this->Row, 1);
		}
	}

	//2.若当前瓦片不在globe边缘

	//根据当前瓦片行列号，判断当前瓦片在4*4方阵中的位置,保证该方阵在上一级别中正好是2*2方阵
	//  ****    ****    ****    ****
	//  *0**    **1*    ****    ****
	//  ****    ****    *2**    **3*
	//  ****    ****    ****    ****
	//判断依据：假设行列号从0开始
	//0号位置，行号为偶数，列号为奇数；
	//1号位置，行号为偶数，列号为偶数；
	//2号位置，行号为奇数，列号为奇数；
	//3号位置，行号为奇数，列号为偶数；
	/*int32 currentTilePositionIn16 = 0;

	if (this->Row % 2 == 0)
	{
		if (this->Col % 2 == 1)
			currentTilePositionIn16 = 0;
		else
			currentTilePositionIn16 = 1;
	}
	else
	{
		if (this->Col % 2 == 1)
			currentTilePositionIn16 = 2;
		else
			currentTilePositionIn16 = 3;
	}*/

	//根据当前瓦片的在4*4方阵瓦片中的位置，计算其上一级四个父瓦片，基于父瓦片计算其余子瓦片
	//若当前瓦片处于0号位置，其父瓦片为西北角瓦片，基于该瓦片计算其他三个父瓦片并计算各自子瓦片
	TArray<TileInfo_Grid> fourUpLevelTiles;
	this->GetParent().GetParent().GetChildren(fourUpLevelTiles);
	
	//TArray<TileInfo_Grid> thisLevelTilesIn16;
	int neighbor_15_index=0;
	for (int i = 0; i < fourUpLevelTiles.Num(); i++)
	{
		TArray<TileInfo_Grid> currentFourTileInThisLevel;
		fourUpLevelTiles[i].GetChildren(currentFourTileInThisLevel);
		for (int j = 0; j < currentFourTileInThisLevel.Num(); j++)
		{
			if (currentFourTileInThisLevel[j].Equal(this))
				continue;
			neighbor_15[neighbor_15_index]=currentFourTileInThisLevel[j];
			neighbor_15_index++;
		}	
	}	
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

TileNode::TileNode(int levelNum, int row, int col)
{	
	this->tileInfo = new TileInfo_Grid(levelNum, row, col);		
}

TileNode::TileNode(int levelNum, int row, int col, TileNode* parent)
{
	this->tileInfo = new TileInfo_Grid(levelNum, row, col);
	this->parent = parent;
}

TileNode::TileNode(TileInfo_Grid inputTileInfo)
{
	this->tileInfo = &inputTileInfo;
}

TileNode::TileNode(TileInfo_Grid * inputTileInfo)
{
	this->tileInfo = inputTileInfo;
}

TileNode::TileNode()
{	
}

void TileNode::CreateSubTileNode()
{
	TileInfo_Grid * thisTileInfo_Grid = (TileInfo_Grid *)(this->tileInfo);
	if (thisTileInfo_Grid != NULL)
	{
		if(this->children.Num() != 0)
			this->children.RemoveAt(0,this->children.Num());

		if (thisTileInfo_Grid->LevelNum == -1)
		{
			this->children.Add(new TileNode(0, 0, 0, this));
			this->children.Add(new TileNode(0, 0, 1, this));
			return;
		}		
		//添加西北角子瓦片
		this->children.Add(new TileNode(thisTileInfo_Grid->LevelNum + 1, thisTileInfo_Grid->Row * 2 + 1, thisTileInfo_Grid->Col * 2, this));		
		//添加东北角子瓦片
		this->children.Add(new TileNode(thisTileInfo_Grid->LevelNum + 1, thisTileInfo_Grid->Row * 2 + 1, thisTileInfo_Grid->Col * 2 + 1, this));
		//添加西南角子瓦片
		this->children.Add(new TileNode(thisTileInfo_Grid->LevelNum + 1, thisTileInfo_Grid->Row * 2, thisTileInfo_Grid->Col * 2, this));		
		//添加东南角自瓦片
		this->children.Add(new TileNode(thisTileInfo_Grid->LevelNum + 1, thisTileInfo_Grid->Row * 2, thisTileInfo_Grid->Col * 2 + 1, this));
	}
}

