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