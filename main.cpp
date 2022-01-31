#include <iostream>
#include <string>

#include "src/header/alevel.h"
using namespace ALevelN;
#include "src/header/btecnqf.h"
using namespace BTECNationalNQF;
#include "src/header/coremaths.h"
using namespace CoreMaths;
#include "src/header/tlevel.h"
using namespace TLevel;
#include "src/header/aqatechnical.h"
using namespace AQATechnicalN;
#include "src/header/extendedproject.h"
using namespace ExtendedProjectN;

// Definition of methods that are located below main().
void SelectedALevel();
void SelectedBTECNQF();
void SelectedCoreMaths();
void SelectedTLevels();
void SelectedAQATechnical();
void SelectedExtendedProject();

int main()
{
    std::cout << "=========================================" << std::endl;
    std::cout << "UCAS GRADE CALCULATOR" << std::endl;
    std::cout << "Written by: @WillTheDeveloper and @colsak" << std::endl;
    std::cout << "=========================================" << std::endl;

    int selection; // Create the variable for the selection below.

    std::cout << "Which qualification type are you doing?" << std::endl;
    std::cout << "[1] A Levels" << std::endl;
    std::cout << "[2] BTEC NQF" << std::endl;
    std::cout << "[3] BTEC QCF" << std::endl;
    std::cout << "[4] BTEC RQF" << std::endl;
    std::cout << "[5] Cambridge PREU" << std::endl;
    std::cout << "[6] Core maths" << std::endl;
    std::cout << "[7] OCR Cambridge Technical" << std::endl;
    std::cout << "[8] T Levels" << std::endl;
    std::cout << "[9] AQA Technicals" << std::endl;
    std::cout << "[10] Extended Project" << std::endl;

    std::cout << "=========================================" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection; // Store the number entered by the user.

    switch (selection) {
        case 1:
            SelectedALevel();
            break;
        case 2:
            SelectedBTECNQF();
            break;
        case 6:
            SelectedCoreMaths();
            break;
        case 8:
            SelectedTLevels();
            break;
        case 9:
            SelectedAQATechnical();
            break;
        case 10:
            SelectedExtendedProject();
            break;
    }
}

std::string Grades()
{
    std::string pts; // Create the variable for the input below to be passed to subsequent method.
    std::cout << "What grade did you get? ";
    std::cin >> pts;
    return pts;
}

void SelectedALevel()
{
    int selection;

    std::cout << "Which type of A Level?" << std::endl;
    std::cout << "[0] Not sure" << std::endl;
    std::cout << "[1] Standard A Levels" << std::endl;
    std::cout << "[2] A Level (9 Unit Award)" << std::endl;
    std::cout << "[3] A Level Double Award" << std::endl;
    std::cout << "[4] AS Level" << std::endl;
    std::cout << "[5] AS Level Double Award" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevel(pts) << " points." << std::endl;
            break;
        }
        case 2: {
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevelNineUnitAward(pts) << " points." << std::endl;
            break;
        }
    }
}

void SelectedBTECNQF()
{
    int selection;

    std::cout << "Which type of BTEC NQF?" << std::endl;
    std::cout << "[0] Not sure" << std::endl;
    std::cout << "[1] National Award" << std::endl;
    std::cout << "[2] National Certificate" << std::endl;
    std::cout << "[3] National Diploma" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            std::string grade;
            grade = Grades();
            std::cout << BTECNationalNQF::NationalAward(grade) << std::endl;
            break;
        }
        case 2: {
            std::string grade;
            grade = Grades();
            std::cout << BTECNationalNQF::NationalCertificate(grade) << std::endl;
            break;
        }
        case 3: {
            std::string grade;
            grade = Grades();
            std::cout << BTECNationalNQF::NationalDiploma(grade) << std::endl;
            break;
        }
    }
}

void SelectedCoreMaths()
{
    int selection;

    selection = 1;

    switch (selection) {
        case 1:
            std::string pts;
            pts = Grades();
            std::cout << CoreMaths::CoreMathsUCASGrade(pts) << std::endl;
            break;
    }
}

void SelectedTLevels()
{
    int selection;

    selection = 1;

    switch (selection) {
        case 1:
            std::string grade;
            grade = Grades();
            std::cout << TLevel::TLevelUCASGrade(grade) << std::endl;
            break;
    }
}

void SelectedAQATechnical()
{
    int selection;

    std::cout << "Which type of AQA Technical are you doing?" << std::endl;
    std::cout << "[1] Level 3 Foundation Technical" << std::endl;
    std::cout << "[2] Level 3 Technical (1080)" << std::endl;
    std::cout << "[3] Level 3 Technical (540)" << std::endl;
    std::cout << "[4] Level 3 Technical (720)" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    switch(selection) {
        case 1: {
            std::string pts;
            pts = Grades();
            std::cout << AQATechnicalN::L3FoundationTechnical(pts) << std::endl;
            break;
        }
        case 2: {
            std::string pts;
            pts = Grades();
            std::cout << AQATechnicalN::L3Technical1080(pts) << std::endl;
            break;
        }
        case 3: {
            std::string pts;
            pts = Grades();
            std::cout << AQATechnicalN::L3Technical540(pts) << std::endl;
            break;
        }
        case 4: {
            std::string pts;
            pts = Grades();
            std::cout << AQATechnicalN::L3Technical720(pts) << std::endl;
            break;
        }
    }
}

void SelectedExtendedProject()
{
    int selection;

    selection = 1;

    switch(selection) {
        case 1: {
            std::string pts;
            pts = Grades();
            std::cout << ExtendedProjectN::ExtendedProject(pts) << std::endl;
            break;
        }
    }
}