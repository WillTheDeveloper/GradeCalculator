#include "header/coremaths.h"
#include "string"
using namespace CoreMaths;

int CoreMaths::CoreMathsUCASGrade(std::string pts) {
    if(pts == "A") {return 20;}
    else if (pts == "B") {return 16;}
    else if (pts == "C") {return 12;}
    else if (pts == "D") {return 10;}
    else if (pts == "E") {return 6;}
    else {return -1;};
}
