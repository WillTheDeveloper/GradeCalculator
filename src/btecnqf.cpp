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

void Test(const int TEST_COUNT) {

    // All the options for each function
    char f1Options[] = {'D', 'M', 'P'}; // f1 = function 1 = NationalAward
    std::string f2Options[] = {"DD", "DM", "MM", "MP", "PP"};
    std::string f3Options[] = {"DDD", "DDM", "DMM", "MMM", "MMP", "MPP", "PPP"};

    // init random number generator (requires library <ctime>)
    srand((unsigned) time(0));

    std::cout << "Tests for BTEC NQF:" << std::endl;

    int failCounter = 0;
    for (int i = 0; i < TEST_COUNT; i++) {
        if (NationalAward(f1Options[rand() % 3]) == -1) {
            ++failCounter;
        }
    }
    std::cout << "Total NationalAward failures: " << failcounter << std::endl;

    failCounter = 0;

    for (int i = 0; i < TEST_COUNT; i++) {
        if (NationalAward(f2Options[rand() % 5]) == -1) {
            ++failCounter;
        }
    }
    std::cout << "Total NationalCertificate failures: " << failcounter << std::endl;

    failCounter = 0;

    for (int i = 0; i < TEST_COUNT; i++) {
        if (NationalAward(f3Options[rand() % 7]) == -1) {
            ++failCounter;
        }
    }
    std::cout << "Total NationalDiploma failures: " << failcounter << std::endl;

    std::cout << std::endl; // New line after this library has finished testing
}