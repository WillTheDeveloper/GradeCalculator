#include "string"
#include <iostream>
#include "header/alevel.h"

using namespace ALevelN;

int ALevelN::ALevel(std::string pts)
{
    if (pts == "A*")
    {
        return 56;
    }
    else if (pts == "A")
    {
        return 48;
    }
    else if (pts == "B")
    {
        return 40;
    }
    else if (pts == "C")
    {
        return 32;
    }
    else if (pts == "D")
    {
        return 24;
    }
    else if (pts == "E")
    {
        return 16;
    }
    else
    {
        return -1;
    }
}

void ALevelN::ALevelGrades()
{
    std::cout << "1. A*" << std::endl;
    std::cout << "2. A" << std::endl;
    std::cout << "3. B" << std::endl;
    std::cout << "4. C" << std::endl;
    std::cout << "5. D" << std::endl;
    std::cout << "6. E" << std::endl;
}

int ALevelN::ALevelNineUnitAward(std::string pts)
{
    if (pts == "A*A")
    {
        return 76;
    }
    else if (pts == "AA")
    {
        return 68;
    }
    else if (pts == "AB")
    {
        return 64;
    }
    else if (pts == "BB")
    {
        return 56;
    }
    else if (pts == "BC")
    {
        return 52;
    }
    else if (pts == "CC")
    {
        return 44;
    }
    else if (pts == "CD")
    {
        return 42;
    }
    else if (pts == "DD")
    {
        return 34;
    }
    else if (pts == "DE")
    {
        return 30;
    }
    else if (pts == "EE")
    {
        return 22;
    }
    else
    {
        return -1;
    }
}

void ALevelN::ALevelNineUnitAwardGrades()
{
    std::cout << "1. A*A" << std::endl;
    std::cout << "2. AA" << std::endl;
    std::cout << "3. AB" << std::endl;
    std::cout << "4. BB" << std::endl;
    std::cout << "5. BC" << std::endl;
    std::cout << "6. CC" << std::endl;
    std::cout << "7. CD" << std::endl;
    std::cout << "8. DD" << std::endl;
    std::cout << "9. DE" << std::endl;
    std::cout << "10. EE" << std::endl;
}

int ALevelN::ALevelDoubleAward(std::string pts)
{
    if (pts == "A*A")
    {
        return 112;
    }
    else if (pts == "AA")
    {
        return 104;
    }
    else if (pts == "AB")
    {
        return 96;
    }
    else if (pts == "BB")
    {
        return 80;
    }
    else if (pts == "BC")
    {
        return 72;
    }
    else if (pts == "CC")
    {
        return 64;
    }
    else if (pts == "CD")
    {
        return 56;
    }
    else if (pts == "DD")
    {
        return 48;
    }
    else if (pts == "DE")
    {
        return 40;
    }
    else if (pts == "EE")
    {
        return 32;
    }
    else
    {
        return -1;
    }
}

void ALevelN::ALevelDoubleAwardGrades()
{
    std::cout << "1. A*A" << std::endl;
    std::cout << "2. AA" << std::endl;
    std::cout << "3. AB" << std::endl;
    std::cout << "4. BB" << std::endl;
    std::cout << "5. BC" << std::endl;
    std::cout << "6. CC" << std::endl;
    std::cout << "7. CD" << std::endl;
    std::cout << "8. DD" << std::endl;
    std::cout << "9. DE" << std::endl;
    std::cout << "10. EE" << std::endl;
}

int ALevelN::ASLevel(std::string pts)
{
    if (pts == "A")
    {
        return 20;
    }
    else if (pts == "B")
    {
        return 16;
    }
    else if (pts == "C")
    {
        return 12;
    }
    else if (pts == "D")
    {
        return 10;
    }
    else if (pts == "E")
    {
        return 6;
    }
    else
    {
        return -1;
    }
}

void ALevelN::ASLevelGrades()
{
    std::cout << "1. A*" << std::endl;
    std::cout << "2. A" << std::endl;
    std::cout << "3. B" << std::endl;
    std::cout << "4. C" << std::endl;
    std::cout << "5. D" << std::endl;
    std::cout << "6. E" << std::endl;
}

int ALevelN::ASLevelDoubleAward(std::string pts)
{
    if (pts == "AA")
    {
        return 40;
    }
    else if (pts == "AB")
    {
        return 36;
    }
    else if (pts == "BB")
    {
        return 32;
    }
    else if (pts == "BC")
    {
        return 28;
    }
    else if (pts == "CC")
    {
        return 24;
    }
    else if (pts == "CD")
    {
        return 22;
    }
    else if (pts == "DD")
    {
        return 20;
    }
    else if (pts == "DE")
    {
        return 16;
    }
    else if (pts == "EE")
    {
        return 12;
    }
    else
    {
        return -1;
    }
}

void ALevelN::ASLevelDoubleAwardGrades()
{
    std::cout << "1. AA" << std::endl;
    std::cout << "2. AB" << std::endl;
    std::cout << "3. BB" << std::endl;
    std::cout << "4. BC" << std::endl;
    std::cout << "5. CC" << std::endl;
    std::cout << "6. CD" << std::endl;
    std::cout << "7. DD" << std::endl;
    std::cout << "8. DE" << std::endl;
    std::cout << "9. EE" << std::endl;
}