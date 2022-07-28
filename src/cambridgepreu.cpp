#include "header/cambridgepreu.h"
#include "string"
#include <iostream>

int Principal(std::string pts)
{
    if(pts == "D1")
    {
        return 56;
    }
    else if(pts == "D2")
    {
        return 56;
    }
    else if(pts == "D3")
    {
        return 52;
    }
    else if(pts == "M1")
    {
        return 44;
    }
    else if(pts == "M2")
    {
        return 40;
    }
    else if(pts == "M3")
    {
        return 36;
    }
    else if (pts == "P1")
    {
        return 28;
    }
    else if (pts == "P2")
    {
        return 24;
    }
    else if (pts == "P3")
    {
        return 20;
    }
    else
    {
        return -1;
    }
}

int ShortCourse(std::string pts)
{
    if(pts == "D1")
    {
        return 22;
    }
    else if(pts == "D2")
    {
        return 20;
    }
    else if(pts == "D3")
    {
        return 20;
    }
    else if(pts == "M1")
    {
        return 18;
    }
    else if(pts == "M2")
    {
        return 14;
    }
    else if(pts == "M3")
    {
        return 12;
    }
    else if (pts == "P1")
    {
        return 10;
    }
    else if (pts == "P2")
    {
        return 8;
    }
    else if (pts == "P3")
    {
        return 6;
    }
    else
    {
        return -1;
    }
}

int GPIR(std::string pts)
{
    if(pts == "D1")
    {
        return 56;
    }
    else if(pts == "D2")
    {
        return 56;
    }
    else if(pts == "D3")
    {
        return 52;
    }
    else if(pts == "M1")
    {
        return 44;
    }
    else if(pts == "M2")
    {
        return 40;
    }
    else if(pts == "M3")
    {
        return 36;
    }
    else if (pts == "P1")
    {
        return 28;
    }
    else if (pts == "P2")
    {
        return 24;
    }
    else if (pts == "P3")
    {
        return 20;
    }
    else
    {
        return -1;
    }
}

void PrincipalGrades()
{
    std::cout << "1. D1" << std::endl;
    std::cout << "2. D2" << std::endl;
    std::cout << "3. D3" << std::endl;
    std::cout << "4. M1" << std::endl;
    std::cout << "5. M2" << std::endl;
    std::cout << "6. M3" << std::endl;
    std::cout << "7. P1" << std::endl;
    std::cout << "8. P2" << std::endl;
    std::cout << "9. P3" << std::endl;
}

void ShortCourseGrades()
{
    std::cout << "1. D1" << std::endl;
    std::cout << "2. D2" << std::endl;
    std::cout << "3. D3" << std::endl;
    std::cout << "4. M1" << std::endl;
    std::cout << "5. M2" << std::endl;
    std::cout << "6. M3" << std::endl;
    std::cout << "7. P1" << std::endl;
    std::cout << "8. P2" << std::endl;
    std::cout << "9. P3" << std::endl;
}

void GPIRGrades()
{
    std::cout << "1. D1" << std::endl;
    std::cout << "2. D2" << std::endl;
    std::cout << "3. D3" << std::endl;
    std::cout << "4. M1" << std::endl;
    std::cout << "5. M2" << std::endl;
    std::cout << "6. M3" << std::endl;
    std::cout << "7. P1" << std::endl;
    std::cout << "8. P2" << std::endl;
    std::cout << "9. P3" << std::endl;
}