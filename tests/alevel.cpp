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

void Test(std::string value, int expects)
{
    int result = ALevel(value);
    Equals(result, expects)
}

void RunTests()
{
    Test("A*", 56);
    Test("A", 48);
    Test("B", 40);
    Test("C", 32);
    Test("D", 24);
    Test("E", 16);
    Test("Z", -1);
}