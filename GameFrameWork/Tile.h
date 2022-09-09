#include "Unit.h"
class Tile
{
private:
	Unit u;
public:
	void addUnit(Unit u);
	void removeUnit(Unit u);
	void removeAllUnits();
	Unit getUnit();
};