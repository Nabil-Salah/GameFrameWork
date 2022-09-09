#include "Board.h"
void Board::Init()
{
	board.resize(this->height);
	for (auto& i: board)
	{
		i.resize(this->width);
	}
}
Board::Board(int h, int w) {
	this->height = h;
	this->width = w;
	Init();
}


Tile Board::getTile(int x, int y)
{
	--x; --y;
	return board[x][y];
}

Tile& Board::getTiler(int x, int y)
{
	return board[--x][--y];
}


void Board::addUnit(int x, int y,Unit u)
{
	getTiler(x,y).addUnit(u);
}

void Board::removeUnit(int x, int y,Unit u)
{
	getTiler(x, y).removeUnit(u);
}

void Board::removeAllUnits(int x, int y)
{
	getTiler(x, y).removeAllUnits();
}

Unit Board::getUnit(int x, int y)
{
	return getTile(x, y).getUnit();
}
