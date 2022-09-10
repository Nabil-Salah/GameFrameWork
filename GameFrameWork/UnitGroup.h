#pragma once
#include <map>
#include <vector>
#include "Unit.h"
class UnitGroup
{
private:
        map<int,Unit> units;
public: 
    UnitGroup(vector<Unit> unitList) {
        for (auto& unit:unitList )
        {
            units[unit.getId()]= unit;
        }
    }

    void addUnit(Unit unit) {
        units[unit.getId()] = unit;
    }

    void removeUnit(int id) {
        units.erase(id);
    }

    void removeUnit(Unit unit) {
        removeUnit(unit.getId());
    }

    Unit getUnit(int id) {
        return (Unit)units[id];
    }

    vector<Unit> getUnits() {
        vector<Unit> unitList;
        for (auto& unit: units) {
            unitList.push_back(unit.second);
        }
        return unitList;
    }
};

