#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Weapon.h"
using namespace std;
class Unit
{
private:
    string type;
    int id;
    string name;
    vector<Weapon>weapons;
    map<string, int>properties;
public:
    Unit() {
        id = 1;
    }
    Unit(int id) {
        this->id = id;
    }
    string getType()
    {
        return type;
    }

    void setType(string type)
    {
        this->type = type;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    vector<Weapon> getWeapons()
    {
        return weapons;
    }

    int getId() {
        return id;
    }

    void addWeapon(vector<Weapon> weapon) {
        if (weapon.size() == 0)return;
        this->weapons = weapon;
    }

    void setProperty(string property, int value)
    {
        properties[property] = value;
    }

    int getProperty(string property) {
        if (properties.find(property) == properties.end()) {
            return 0;
        }
        return properties[property];
    }
};

