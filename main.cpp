#include <iostream>
#include <string>

#include "src/header/alevel.h"
using namespace ALevelN;
using namespace ALevelTest;
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
#include "src/header/btecqcf.h"
using namespace BTECNationalQCF;

// Definition of methods that are located below main().
void SelectedALevel(); // 1
void SelectedBTECNQF(); // 2
void SelectedBTECQCF(); // 3
//void SelectedBTECRQF(); // 4
void SelectedCoreMaths(); // 6
void SelectedTLevels(); // 8
void SelectedAQATechnical(); // 9
void SelectedExtendedProject(); // 10

void SelectedRunTests();

int main()
{
    std::cout << "=========================================" << std::endl;
    std::cout << "UCAS GRADE CALCULATOR" << std::endl;
    std::cout << "Written by: @WillTheDeveloper and @colsak" << std::endl;
    std::cout << "=========================================" << std::endl;

    int selection; // Create the variable for the selection below.

    std::cout << "Which qualification type are you doing?" << std::endl;
    std::cout << "[1] A Levels" << std::endl; // Done
    std::cout << "[2] BTEC NQF" << std::endl; // Done
    std::cout << "[3] BTEC QCF" << std::endl;
    std::cout << "[4] BTEC RQF" << std::endl;
    std::cout << "[5] Cambridge PREU" << std::endl;
    std::cout << "[6] Core maths" << std::endl; // Done
    std::cout << "[7] OCR Cambridge Technical" << std::endl;
    std::cout << "[8] T Levels" << std::endl; // Done
    std::cout << "[9] AQA Technicals" << std::endl; // Done
    std::cout << "[10] Extended Project" << std::endl; // Done

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
        case 3:
            SelectedBTECQCF();
            break;
//        case 4:
//            SelectedBTECRQF();
//            break;
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
        case 69:
            SelectedRunTests();
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

void SelectedBTECQCF()
{
    int selection;

    std::cout << "Which type of BTEC QCF?" << std::endl;
    std::cout << "NOTE: These are all from Pearson." << std::endl;
    std::cout << "[0] Not sure" << std::endl;
    std::cout << "[1] 90-Credit Diploma" << std::endl;
    std::cout << "[2] Certificate" << std::endl;
    std::cout << "[3] Diploma" << std::endl;
    std::cout << "[4] Extended Diploma" << std::endl;
    std::cout << "[5] Subsidiary Diploma" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            BTECNationalQCF::Pearson90DiplomaGrades();
            std::string pts;
            pts = Grades();
            std::cout << BTECNationalQCF::Pearson90Diploma(pts) << " points." << std::endl;
            break;
        }
        case 2: {
            BTECNationalQCF::PearsonCertificateGrades();
            std::string pts;
            pts = Grades();
            std::cout << BTECNationalQCF::PearsonCertificate(pts) << " points." << std::endl;
            break;
        }
        case 3: {
            BTECNationalQCF::Pearson90DiplomaGrades();
            std::string pts;
            pts = Grades();
            std::cout << BTECNationalQCF::PearsonDiploma(pts) << " points." << std::endl;
            break;
        }
        case 4: {
            BTECNationalQCF::PearsonExtendedDiplomaGrades()
            std::string pts;
            pts = Grades();
            std::cout << BTECNationalQCF::PearsonExtendedDiploma(pts) << " points." << std::endl;
            break;
        }
        case 5: {
            BTECNationalQCF::PearsonSubsidiaryDiplomaGrades();
            std::string pts;
            pts = Grades();
            std::cout << BTECNationalQCF::PearsonSubsidiaryDiploma(pts) << " points." << std::endl;
            break;
        }
    }
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
            ALevelN::ALevelGrades();
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevel(pts) << " points." << std::endl;
            break;
        }
        case 2: {
            ALevelN::ALevelNineUnitAwardGrades();
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevelNineUnitAward(pts) << " points." << std::endl;
            break;
        }
        case 3: {
            ALevelN::ALevelDoubleAwardGrades();
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ALevelDoubleAward(pts) << " points." << std::endl;
            break;
        }
        case 4: {
            ALevelN::ASLevelGrades();
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ASLevel(pts) << " points." << std::endl;
            break;
        }
        case 5: {
            ALevelN::ASLevelDoubleAwardGrades();
            std::string pts;
            pts = Grades();
            std::cout << ALevelN::ASLevelDoubleAward(pts) << " points." << std::endl;
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

void SelectedRunTests()
{
    int selection;

    std::cout << "What would you like to test?" << std::endl;
    std::cout << "[0] All" << std::endl;
    std::cout << "[1] A Levels" << std::endl;

    std::cout << "Enter selection number: ";
    std::cin >> selection;

    /*switch (selection) {
        case 0: {
            std::cout << ALevelTest::RunTests() << std::endl;
            break;
        }
        case 1: {
            std::cout << ALevelTest::TestALevel() << std::endl;
            break;
        }

    }*/
}