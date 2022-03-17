#include "header/extendedproject.h"
#include <iostream>
#include "string"

using namespace ExtendedProjectN;

int ExtendedProjectN::ExtendedProject(std::string pts)
{
    if (pts == "A*")
    {
        return 28;
    }
    else if (pts == "A")
    {
        return 24;
    }
    else if (pts == "B")
    {
        return 20;
    }
    else if (pts == "C")
    {
        return 16;
    }
    else if (pts == "D")
    {
        return 12;
    }
    else if (pts == "E")
    {
        return 8;
    }
    else
    {
        return -1;
    }
}

void ExtendedProjectN::ExtendedProjectGrades()
{
    std::cout << "1. A*" << std::endl;
    std::cout << "2. A" << std::endl;
    std::cout << "3. B" << std::endl;
    std::cout << "4. C" << std::endl;
    std::cout << "5. D" << std::endl;
    std::cout << "6. E" << std::endl;
}