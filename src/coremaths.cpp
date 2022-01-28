#include "header/coremaths.h"
using namespace CoreMaths;

int CoreMathsUCASGrade(char grade) {
    switch (grade.c_str()) {
        case "A": return 20;
        case "B": return 16;
        case "C": return 12;
        case "D": return 10;
        case "E": return 6;
        default: return -1;
    }
}
