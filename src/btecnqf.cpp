#include "header/btecnqf.h"
using namespace BTECNationalNQF;

int NationalAward(char grade) {
    switch (grade) {
        case 'D': return 48;
        case 'M': return 32;
        case 'P': return 32;
        default: return -1;
    }
}

int NationalCertificate(std::string grade) {
    if (grade == "DD") { return 96; }
    else if (grade == "DM") { return 80; }
    else if (grade == "MM") { return 64; }
    else if (grade == "MP") { return 48; }
    else if (grade == "PP") { return 32; }
    else { return -1;}
}

int NationalDiploma(std::string grade) {
    if (grade == "DDD") { return 144; }
    else if (grade == "DDM") { return 128; }
    else if (grade == "DMM") { return 112; }
    else if (grade == "MMM") { return 96; }
    else if (grade == "MMP") { return 80; }
    else if (grade == "MPP") { return 64; }
    else if (grade == "PPP") { return 48; }
    else { return -1; }
}
