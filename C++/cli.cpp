// Including standard library headers.
#include <iostream> 
#include <string>
#include <sstream>

// This contains all the different courses the user could take.
// This is done for conveniance as referrring to courses as integers
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
	if (course == CERTIFICATE) {
        if (260 <= qcfPoints) {
            grade = "D*";
			ucasPoints = 28;
        } else if (250 <= qcfPoints) {
            grade = "D";
			ucasPoints = 24;
        } else if (230 <= qcfPoints) {
            grade = "M";
			ucasPoints = 16;
        } else if (210 <= qcfPoints) {
            grade = "P";
			ucasPoints = 8;
        } 
	// Assigns grade for SUBSIDIARY DIPLOMA
	} else if (course == SUBSIDIARY_DIPLOMA) {
        if (520 <= qcfPoints) {
            grade = "D*";
			ucasPoints = 56;
        } else if (500 <= qcfPoints) {
            grade = "D";
			ucasPoints = 48;
        } else if (460 <= qcfPoints) {
            grade = "M";
			ucasPoints = 32;
        } else if (420 <= qcfPoints) {
            grade = "P";
			ucasPoints = 16;
        }  
	// Assigns grade for DIPLOMA 90 CREDIT
	} else if (course == DIPLOMA_90_CREDIT) {
        if (790 <= qcfPoints) {
            grade = "D*D*";
			ucasPoints = 112;
        } else if (770 <= qcfPoints) {
            grade = "D*D";
			ucasPoints = 104;
        } else if (750 <= qcfPoints) {
            grade = "DD";
			ucasPoints = 96;
        } else if (720 <= qcfPoints) {
            grade = "DM";
			ucasPoints = 80;
        } else if (690 <= qcfPoints) {
            grade = "MM";
			ucasPoints = 64;
        } else if (660 <= qcfPoints) {
            grade = "MP";
			ucasPoints = 48;
        } else if (630 <= qcfPoints) {
            grade = "PP";
			ucasPoints = 32;
        } 
	// Assigns grade for DIPLOMA
    } else if (course == DIPLOMA) {
        if (1060 <= qcfPoints) {
            grade = "D*D*";
			ucasPoints = 112;
        } else if (1030 <= qcfPoints) {
            grade = "D*D";
			ucasPoints = 104;
        } else if (1000 <= qcfPoints) {
            grade = "DD";
			ucasPoints = 96;
        } else if (960 <= qcfPoints) {
            grade = "DM";
			ucasPoints = 80;
        } else if (920 <= qcfPoints) {
            grade = "MM";
			ucasPoints = 64;
        } else if (880 <= qcfPoints) {
            grade = "MP";
			ucasPoints = 48;
        } else if (840 <= qcfPoints) {
            grade = "PP";
			ucasPoints = 32;
        } 
	// Assigns grade for EXTENDED DIPLOMA
    } else if (course == EXTENDED_DIPLOMA) {
        if (1590 <= qcfPoints) {
            grade = "D*D*D*";
			ucasPoints = 168;
        } else if (1560 <= qcfPoints) {
            grade = "D*D*D";
			ucasPoints = 160;
        } else if (1530 <= qcfPoints) {
            grade = "D*DD";
			ucasPoints = 152;
        } else if (1500 <= qcfPoints) {
            grade = "DDD";
			ucasPoints = 144;
        } else if (1460 <= qcfPoints) {
            grade = "DDM";
			ucasPoints = 128;
        } else if (1420 <= qcfPoints) {
            grade = "DMM";
			ucasPoints = 112;
        } else if (1380 <= qcfPoints) {
            grade = "MMM";
			ucasPoints = 96;
        } else if (1340 <= qcfPoints) {
            grade = "MMP";
			ucasPoints = 80;
        } else if (1300 <= qcfPoints) {
            grade = "MPP";
			ucasPoints = 64;
        } else if (1260 <= qcfPoints) {
            grade = "PPP";
			ucasPoints = 48;
        } 
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
    Course course = (Course)(input-1);
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
  
  // Calls calcate to get grades and UCAS Points from QCF points and Course type
  calculate(userCourse, sum);
}