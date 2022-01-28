// Including standard library headers.
#include <iostream>
#include <string>
#include <sstream>

// This contains all the different courses the user could take.
// This is done for convenience as referring to courses as integers
// would get annoying.
typedef enum Course {
	CERTIFICATE,
	SUBSIDIARY_DIPLOMA,
	DIPLOMA_90_CREDIT,
    DIPLOMA,
    EXTENDED_DIPLOMA
} Course;

// Calculates the grades based off what course and how many
// QCF points the user achieved.
void calculate(Course course, int qcfPoints) {
    std::string output = "You got ";
    std::string grade;
	int ucasPoints;

	// Assigns grade for CERTIFICATE
	switch (course) {
        case CERTIFICATE:
            switch (qcfPoints) {
                case 260:
                    grade = "D*";
                    ucasPoints = 28;
                    break;
                case 250:
                    grade = "D";
                    ucasPoints = 24;
                    break;
                case 230:
                    grade = "M";
                    ucasPoints = 16;
                    break;
                case 210:
                    grade = "P";
                    ucasPoints = 8;
                default:
                    std::cout << "Please round up your points";
            }
            break;
        case SUBSIDIARY_DIPLOMA:
            switch (qcfPoints) {
                case 520:
                    grade = "D*";
                    ucasPoints = 56;
                    break;
                case 500:
                    grade = "D";
                    ucasPoints = 48;
                    break;
                case 460:
                    grade = "M";
                    ucasPoints = 32;
                    break;
                case 420:
                    grade = "P";
                    ucasPoints = 16;
                    break;
                default:
                    std::cout << "Please round up your points";
            }
            break;
        case DIPLOMA_90_CREDIT:
            switch (qcfPoints) {
                case 790:
                    grade = "D*D*";
                    ucasPoints = 112;
                    break;
                case 770:
                    grade = "D*D";
                    ucasPoints = 104;
                    break;
                case 750:
                    grade = "DD";
                    ucasPoints = 96;
                    break;
                case 720:
                    grade = "DM";
                    ucasPoints = 80;
                    break;
                case 690:
                    grade = "MM";
                    ucasPoints = 64;
                    break;
                case 660:
                    grade = "MP";
                    ucasPoints = 48;
                    break;
                case 630:
                    grade = "PP";
                    ucasPoints = 32;
                    break;
                default:
                    std::cout << "Please round up your points";
            }
            break;
        case DIPLOMA:
            switch (qcfPoints) {
                case 1060:
                    grade = "D*D*";
                    ucasPoints = 112;
                    break;
                case 1030:
                    grade = "D*D";
                    ucasPoints = 104;
                    break;
                case 1000:
                    grade = "DD";
                    ucasPoints = 96;
                    break;
                case 960:
                    grade = "DM";
                    ucasPoints = 80;
                    break;
                case 920:
                    grade = "MM";
                    ucasPoints = 64;
                    break;
                case 880:
                    grade = "MP";
                    ucasPoints = 48;
                    break;
                case 840:
                    grade = "PP";
                    ucasPoints = 32;
                    break;
                default:
                    std::cout << "Please round up your points";
            }
            break;
        case EXTENDED_DIPLOMA:
            switch (qcfPoints) {
                case 1590:
                    grade = "D*D*D*";
                    ucasPoints = 168;
                    break;
                case 1560:
                    grade = "D*D*D";
                    ucasPoints = 160;
                    break;
                case 1530:
                    grade = "D*DD";
                    ucasPoints = 152;
                    break;
                case 1500:
                    grade = "DDD";
                    ucasPoints = 144;
                    break;
                case 1460:
                    grade = "DDM";
                    ucasPoints = 128;
                    break;
                case 1420:
                    grade = "DMM";
                    ucasPoints = 112;
                    break;
                case 1380:
                    grade = "MMM";
                    ucasPoints = 96;
                    break;
                case 1340:
                    grade = "MMP";
                    ucasPoints = 80;
                    break;
                case 1300:
                    grade = "MPP";
                    ucasPoints = 64;
                    break;
                case 1260:
                    grade = "PPP";
                    ucasPoints = 48;
                    break;
                default:
                    std::cout << "Please round up your points";
            }
            break;
    }

	// Converts the QCF points into a string
    std::stringstream ss;
    ss << qcfPoints;
    std::string qcfPointsString;
    ss >> qcfPointsString;

	ss.clear();

	// Converts the UCAS points into a string
	ss << ucasPoints;
	std::string ucasPointsString;
	ss >> ucasPointsString;

	// Appends everything to the output string and prints it
    output += qcfPointsString;
    output += " QCF Points, a ";
    output += (std::string)grade;
	output += " and " + ucasPointsString;
	output += " UCAS points!";

    std::cout << output << std::endl;
}

// Allows the user to enter which course why are on
// Different courses have different QCF requirements
Course getCourse() {
    int input;
    std::cout << "Choose which type of course you are on by inputting the number next to your course type" << std::endl;
	std::cout << "[1] CERTIFICATE" << std::endl;
	std::cout << "[2] SUBSIDIARY DIPLOMA" << std::endl;
	std::cout << "[3] 90 CREDIT DIPLOMA" << std::endl;
    std::cout << "[4] DIPLOMA" << std::endl;
    std::cout << "[5] EXTENDED DIPLOMA" << std::endl << std::endl;
    std::cout << "Course Type: ";

    std::cin >> input;
    auto course = (Course)(input-1);
    return course;
}


int main()
{
  Course userCourse = getCourse();
  int numOfModules;
  int sum; // sum is the totalling for the QCF points

  std::cout << "How many modules are in your course?: " << std::endl;
  std::cin >> numOfModules;

  // These will store the Grades and Weight of each module for the user.
  std::string moduleGrades[numOfModules];
  float moduleWeights[numOfModules];

  // Input module grades
  std::cout << "Grades are P, M and D" << std::endl;
  for (int i = 1; i < numOfModules+1; i++) {
      std::cout << "Give your grade for module " << i << ": " << std::endl;
      std::cin >> moduleGrades[i-1];
  }

  // Input module weight
  std::cout << "Each module has a weight please list the weight for each module on your course: " << std::endl;
  for (int i = 1; i < numOfModules+1; i++) {
      std::cout << "Module " << i << ": ";
      std::cin >> moduleWeights[i-1];
  }

  // Calculates the QCF for a module then adds it to the sum
  // In this case, P is worth 7 points, M 8, and D 9.
  for (int i = 0; i < numOfModules; i++) {
      if (moduleGrades[i] == "P") {
          sum += 7 * moduleWeights[i];
      } else if (moduleGrades[i] == "M") {
          sum += 8 * moduleWeights[i];
      } else if (moduleGrades[i] == "D") {
          sum += 9 * moduleWeights[i];
      }
  }

  // Calls calculate to get grades and UCAS Points from QCF points and Course type
  calculate(userCourse, sum);
}
