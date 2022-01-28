#include "header/alevel.h"
#include "string"

int ALevel(std::string pts)
{
    switch (pts) {
        case "A*": return 56;
        case "A": return 48;
        case "B": return 40;
        case "C": return 32;
        case "D": return 24;
        case "E": return 16;
        default: return -1;
    }
}