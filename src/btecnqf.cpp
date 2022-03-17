#include "header/btecnqf.h"
#include "string"

using namespace BTECNationalNQF;

int BTECNationalNQF::NationalAward(std::string grade) {
    if (grade == "D") {
        return 48;
    }
    else if(grade == "M") {
        return 32;
    }
    else if(grade =="P") {
        return 32;
    }
    else
    {
        return -1;
    }
}

void BTECNationalNQF::NationalAwardGrades()
{
    std::cout << "1. D" << std::endl;
    std::cout << "2. M" << std::endl;
    std::cout << "3. P" << std::endl;
}

int BTECNationalNQF::NationalCertificate(std::string grade) {
    if (grade == "DD") { return 96; }
    else if (grade == "DM") { return 80; }
    else if (grade == "MM") { return 64; }
    else if (grade == "MP") { return 48; }
    else if (grade == "PP") { return 32; }
    else { return -1;}
}

void BTECNationalNQF::NationalCertificateGrades()
{
    std::cout << "1. DD" << std::endl;
    std::cout << "2. DM" << std::endl;
    std::cout << "3. MM" << std::endl;
    std::cout << "4. MP" << std::endl;
    std::cout << "5. PP" << std::endl;
}

int BTECNationalNQF::NationalDiploma(std::string grade) {
    if (grade == "DDD") { return 144; }
    else if (grade == "DDM") { return 128; }
    else if (grade == "DMM") { return 112; }
    else if (grade == "MMM") { return 96; }
    else if (grade == "MMP") { return 80; }
    else if (grade == "MPP") { return 64; }
    else if (grade == "PPP") { return 48; }
    else { return -1; }
}

void BTECNationalNQF::NationalDiplomaGrades()
{
    std::cout << "1. DMM" << std::endl;
    std::cout << "2. DDM" << std::endl;
    std::cout << "3. DMM" << std::endl;
    std::cout << "4. MMM" << std::endl;
    std::cout << "5. MMP" << std::endl;
    std::cout << "6. MPP" << std::endl;
    std::cout << "7. PPP" << std::endl;
}