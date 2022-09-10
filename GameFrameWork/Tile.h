#include "Unit.h"
class Tile
{
private:
	Unit unit;
public:
	void addUnit(Unit u) {
		unit = u;
	}
	void removeUnit(Unit u) {
		return;
	}
	void removeAllUnits() {
		return;
	}
	Unit getUnit() {
		return unit;
	}
};