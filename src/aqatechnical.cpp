#include "string"
#include <iostream>
#include "header/aqatechnical.h"

using namespace AQATechnicalN;

int AQATechnicalN::L3FoundationTechnical(std::string pts)
{
    if(pts == "D*")
    {
        return 56;
    }
    else if(pts == "D")
    {
        return 48;
    }
    else if(pts == "M")
    {
        return 32;
    }
    else if(pts == "P")
    {
        return 16;
    }
    else
    {
        return -1;
    }
}

void AQATechnicalN::L3FoundationTechnicalGrades()
{
    std::cout << "1. D*" << std::endl;
    std::cout << "2. D" << std::endl;
    std::cout << "3. M" << std::endl;
    std::cout << "4. P" << std::endl;
}

int AQATechnicalN::L3Technical1080(std::string pts)
{
    if(pts == "D*D*D*")
    {
        return 168;
    }
    else if(pts == "D*D*D")
    {
        return 160;
    }
    else if(pts == "D*DD")
    {
        return 152;
    }
    else if(pts == "DDD")
    {
        return 144;
    }
    else if(pts == "DDM")
    {
        return 128;
    }
    else if(pts == "DMM")
    {
        return 112;
    }
    else if(pts == "MMM")
    {
        return 96;
    }
    else if(pts == "MMP")
    {
        return 80;
    }
    else if(pts == "MPP")
    {
        return 64;
    }
    else if(pts == "PPP")
    {
        return 48;
    }
    else
    {
        return -1;
    }
}

void AQATechnicalN::L3Technical1080Grades()
{
    std::cout << "1. D*D*D*" << std::endl;
    std::cout << "2. D*D*D" << std::endl;
    std::cout << "3. D*DD" << std::endl;
    std::cout << "4. DDD" << std::endl;
    std::cout << "5. DDM" << std::endl;
    std::cout << "6. DMM" << std::endl;
    std::cout << "7. MMM" << std::endl;
    std::cout << "8. MMP" << std::endl;
    std::cout << "9. MPP" << std::endl;
    std::cout << "10. PPP" << std::endl;
}

int AQATechnicalN::L3Technical540(std::string pts)
{
    if(pts == "D*D*")
    {
        return 84;
    }
    else if(pts == "D*D")
    {
        return 78;
    }
    else if(pts == "DD")
    {
        return 72;
    }
    else if(pts == "DM")
    {
        return 60;
    }
    else if(pts == "MM")
    {
        return 48;
    }
    else if(pts == "MP")
    {
        return 36;
    }
    else if(pts == "PP")
    {
        return 24;
    }
    else
    {
        return -1;
    }
}

void AQATechnicalN::L3Technical540Grades()
{
    std::cout << "1. D*D*" << std::endl;
    std::cout << "2. D*D" << std::endl;
    std::cout << "3. DD" << std::endl;
    std::cout << "4. DM" << std::endl;
    std::cout << "5. MM" << std::endl;
    std::cout << "6. MP" << std::endl;
    std::cout << "7. PP" << std::endl;
}

int AQATechnicalN::L3Technical720(std::string pts)
{
    if(pts == "D*D*")
    {
        return 112;
    }
    else if(pts == "D*D")
    {
        return 104;
    }
    else if(pts == "DD")
    {
        return 96;
    }
    else if(pts == "DM")
    {
        return 80;
    }
    else if(pts == "MM")
    {
        return 64;
    }
    else if(pts == "MP")
    {
        return 48;
    }
    else if(pts == "PP")
    {
        return 32;
    }
    else
    {
        return -1;
    }
}

void AQATechnicalN::L3Technical720Grades()
{
    std::cout << "1. D*D*" << std::endl;
    std::cout << "2. D*D" << std::endl;
    std::cout << "3. DD" << std::endl;
    std::cout << "4. DM" << std::endl;
    std::cout << "5. MM" << std::endl;
    std::cout << "6. MP" << std::endl;
    std::cout << "7. PP" << std::endl;
}