
#include "TileInfo.h"

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
bool TileInfo_Grid::Equal(TileInfo_Grid &other)
{
	if (this->LevelNum == other.LevelNum && this->Row == other.Row && this->Col == other.Col)
		return true;
	return false;
}

TileInfo_Grid::TileInfo_Grid(const int32 levelNum, const int32 row, const int32 col)
{
	this->LevelNum = levelNum;
	this->Row = row;
	this->Col = col;

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
	static TileInfo_Grid tile;  
	tile.LevelNum = thisLevelNum;

	int rowNum = pow(2, thisLevelNum);
	// 根据输入点，确定该点所属行列号，
	tile.Col = Coordinate.Longitude  * (2 * rowNum) / 360 + rowNum; // lon
	tile.Row = Coordinate.Latitude * rowNum / 180 + rowNum / 2.0;   // lat
	return tile;
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
			if (this->Equal(all4ChildrenTileFromParent[i]))
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
	int32 currentTilePositionIn16 = 0;

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
	}

	//根据当前瓦片的在4*4方阵瓦片中的位置，计算其上一级四个父瓦片，基于父瓦片计算其余子瓦片
	//若当前瓦片处于0号位置，其父瓦片为西北角瓦片，基于该瓦片计算其他三个父瓦片并计算各自子瓦片
	TArray<TileInfo_Grid> fourUpLevelTiles;
	this->GetParent().GetParent().GetChildren(fourUpLevelTiles);
	
	TArray<TileInfo_Grid> thisLevelTilesIn16;
	for (int i = 0; i < fourUpLevelTiles.Num(); i++)
	{
		TArray<TileInfo_Grid> currentFourTileInThisLevel;
		fourUpLevelTiles[i].GetChildren(currentFourTileInThisLevel);
		for (int j = 0; j < currentFourTileInThisLevel.Num(); j++)
		{
			thisLevelTilesIn16.Add(currentFourTileInThisLevel[j]);		
		}	
	}

	//确定当前瓦片在4*4方阵中的位置
	int skipIndex = 0;
	if (currentTilePositionIn16 == 0)
		skipIndex = 5;

	else if (currentTilePositionIn16 == 1)
		skipIndex = 6;

	else if (currentTilePositionIn16 == 2)
		skipIndex = 9;

	else if (currentTilePositionIn16 == 3)
		skipIndex = 10;

	int neighborIndex = 0;
	for (int k = 0; k < thisLevelTilesIn16.Num(); k++)
	{
		if (k == skipIndex)
			continue;
		else
		{
			neighbor_15[neighborIndex] = thisLevelTilesIn16[k];
			neighborIndex++;
		}
	}
}

TileNode::TileNode(int levelNum, int row, int col)
{	
	this->tileInfo = TileInfo_Grid(levelNum, row, col);		
}

TileNode::TileNode(TileInfo_Grid inputTileInfo)
{
	this->tileInfo = inputTileInfo;
}

TileNode::TileNode()
{	
}

