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

}