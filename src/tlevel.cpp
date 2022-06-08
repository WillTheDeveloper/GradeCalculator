#include "header/tlevel.h"
using namespace TLevel;

int TLevel::TLevelUCASGrade(std::string grade) {
    if (grade == "D*") { return 168; }
    else if (grade == "D") { return 144; }
    else if (grade == "M") { return 120; }
    else if (grade == "P(H)") { return 96; }
    else if (grade == "P(L)") { return 96; }
    else { return -1; }
}

void TLevel::TLevelGrades()
{
    std::cout << "A. D*" << std::endl;
    std::cout << "B. D" << std::endl;
    std::cout << "C. M" << std::endl;
    std::cout << "D. P(H)" << std::endl;
    std::cout << "E. P(L)" << std::endl;
}
