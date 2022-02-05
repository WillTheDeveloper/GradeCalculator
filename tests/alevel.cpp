#include "../src/header/alevel.h"
#include <iostream>

using namespace ALevelN;

void Equals(int result, int expected)
{
    if (result == expected)
    {
        std::cout << "SUCCESS";
    }
    else
    {
        std::cout << "FAILED: " << result << " || " << expected << std::endl;
    }
}

void TestALevel(std::string value, int expects)
{
    int result = ALevel::ALevel(value);
    Equals(result, expects);
}

void TestALevelNineUnitAward(std::string value, int expects)
{
    int result = ALevel::ALevelNineUnitAward(value);
    Equals(result, expects);
}

void TestALevelDoubleAward(std::string value, int expects)
{
    int result = ALevel::ALevelDoubleAward(value);
    Equals(result, expects);
}

int RunTests()
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
    TestALevelNineUnitAward("BB", 56);
    TestALevelNineUnitAward("BC", 52);
}