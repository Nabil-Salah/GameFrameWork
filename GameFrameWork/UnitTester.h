#pragma once
#include "Unit.h"
#include <iostream>
#include <string>
using namespace std;
class UnitTester
{
public:
    void testType(Unit unit, string type, string expectedOutputType) {
        cout << "\nTesting setting/getting the type property.\n";
        unit.setType(type);
        string outputType = unit.getType();
        if (expectedOutputType == outputType)
        {
            cout << "Test passed\n";
        }
        else
        {
            cout << "Test failed: " + outputType + " didn't match " + expectedOutputType + "\n";
        }
    }
    void testName(Unit unit, string name, string expectedOutputName) {
        cout << "\nTesting setting/getting the type property.";
        unit.setName(name);
        string outputName = unit.getName();
        if (expectedOutputName == outputName)
        {
            cout << "Test passed";
        }
        else
        {
            cout << "Test failed: " + outputName + " didn't match " + expectedOutputName;
        }
    }
    void testUnitSpecificProperty(Unit unit, string propertyName, int inputValue, int expectedOutputType) {
        cout << "\nTesting setting/getting a unit-specific property.\n";
        unit.setProperty(propertyName, inputValue);
        int outputValue = unit.getProperty(propertyName);
        if (expectedOutputType == outputValue)
        {
            cout << "Test passed\n";
        }
        else
        {
            cout << "Test failed: " << outputValue << " didn't match " << expectedOutputType << '\n';
        }
    }

    void testChangeExistentProperty(Unit unit, string propertyName, int propertValue) {
        cout << "\nTesting changing property's value.\n";
        unit.setProperty(propertyName, propertValue);
        int outputValue = unit.getProperty(propertyName);
        if (propertValue == outputValue)
        {
            cout << "Test passed\n";
        }
        else
        {
            cout << "Test failed: " << propertValue << " didn't match " << outputValue << '\n';
        }
    }
    void getIdPropert(Unit unit, int expectedOutputId) {
        int outputId = unit.getId();
        if (expectedOutputId == outputId)
        {
            cout << "Test passed\n";
        }
        else
        {
            cout << "Test failed: " << expectedOutputId << " didn't match " << outputId << '\n';
        }
    }
    int mainTest() {
        Unit unit{ 1000 };
        testType(unit, "infantry", "infantry");
        testUnitSpecificProperty(unit, "hitPoints", 25, 25);
        testName(unit, "nabil", "nabil");
        testChangeExistentProperty(unit, "hitPoints", 10);
        getIdPropert(unit, unit.getId());
        return 0;
    }
};

