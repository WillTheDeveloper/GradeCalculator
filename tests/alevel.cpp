//
// Created by will on 28/01/2022.
//
#include "../src/header/alevel.h"
#include <iostream>

using namespace ALevel;

bool TestALevel()
{
    int expects = 56;

    std::cout << "Testing" << std::endl;
    int value = ALevel("A*");
    std::cout << "Expects: " << expects << std::endl;
    std::cout << "Actual: " << value;

    if (value == expects)
    {
        std::cout << "Result: SUCCESS" << std::endl;
        return true
    }
    else
    {
        std::cout << "Result: FAILED" << std::endl;
        return false
    }
}