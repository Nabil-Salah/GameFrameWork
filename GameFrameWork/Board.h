#pragma once
#include "Tile.h"
#include "Unit.h"
#include <vector>
using namespace std;
class Board
{
private:
	vector<vector<Tile>>board;
	int height, width;
	void Init();
public:
	Board(int h, int w);
	Tile getTile(int x, int y);
	Tile& getTiler(int x, int y);
	void addUnit(int x, int y,Unit u);
	void removeUnit(int x, int y,Unit u);
	void removeAllUnits(int x, int y);
	Unit getUnit(int x, int y);
};

