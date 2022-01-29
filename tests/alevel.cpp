#include "../src/header/alevel.h"
#include <iostream>

using namespace ALevel;

void Equals(int result, int expected)
{
    if (result == expected)
    {
        std::cout << "SUCCESS"
    }
    else
    {
        std::cout << "FAILED: " << result << " || " << expected << std::endl;
    }
}

void TestALevel(std::string value, int expects)
{
    int result = ALevel(value);
    Equals(result, expects);
}

void TestALevelNineUnitAward(std::string value, int expects)
{
    int result = ALevelNineUnitAward(value);
    Equals(result, expects);
}

void TestALevelDoubleAward(std::string value, int expects)
{
    int result = ALevelDoubleAward(value);
    Equals(result, expects);
}

void RunTests()
{
    TestALevel("A*", 56);
    TestALevel("A", 48);
    TestALevel("B", 40);
    TestALevel("C", 32);
    TestALevel("D", 24);
    TestALevel("E", 16);
    TestALevel("Z", -1);

    TestALevelNineUnitAward("A*A", 76);
    TestALevelNineUnitAward("AA", 68);
    TestALevelNineUnitAward("AB", 64);
}