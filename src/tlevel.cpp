#include "header/tlevel.h"
using namespace TLevel;

int TLevel(std::string grade) {
    if (grade == "D*") { return 168; }
    else if (grade == "D") { return 144; }
    else if (grade == "M") { return 120; }
    else if (grade == "P(H)") { return 96; }
    else if (grade == "P(L)") { return 96; }
    else { return -1; }
}
