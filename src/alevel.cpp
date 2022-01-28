#include "header/alevel.h"
#include "string"

int ALevel(std::string pts)
{
    if (pts == "A*")
    {
        return 56;
    }
    else if (pts == "A")
    {
        return 48;
    }
    else if (pts == "B")
    {
        return 40;
    }
    else if (pts == "C")
    {
        return 32;
    }
    else if (pts == "D")
    {
        return 24;
    }
    else if (pts == "E")
    {
        return 16;
    }
    else
    {
        return -1;
    }
}

int ALevelNineUnitAward(std::string pts)
{
    if (pts == "A*A")
    {
        return 76;
    }
    else if (pts == "AA")
    {
        return 68;
    }
    else if (pts == "AB")
    {
        return 64;
    }
    else if (pts == "BB")
    {
        return 56;
    }
    else if (pts == "BC")
    {
        return 52;
    }
    else if (pts == "CC")
    {
        return 44;
    }
    else if (pts == "CD")
    {
        return 42;
    }
    else if (pts == "DD")
    {
        return 34;
    }
    else if (pts == "DE")
    {
        return 30;
    }
    else if (pts == "EE")
    {
        return 22;
    }
    else
    {
        return -1;
    }
}