// Including standard library headers.
#include <iostream> 
#include <string>
#include <sstream>

// This contains all the different courses the user could take.
// This is done for conveniance as referrring to courses as integers
// would get annoying.
typedef enum Course {
    DIPLOMA,
    EXTENDED_DIPLOMA
} Course;

// Calculates the grades based off what course and how many
// QCF points the user achieved.
void calculate(Course course, int qcfPoints) {
    std::string output = "You got ";
    std::string grade;
    
	// Assigns grade for DIPLOMA
    if (course == DIPLOMA) {
        if (1060 <= qcfPoints) {
            grade = "D*D*";
        } else if (1030 <= qcfPoints) {
            grade = "D*D";
        } else if (1000 <= qcfPoints) {
            grade = "DD";
        } else if (960 <= qcfPoints) {
            grade = "DM";
        } else if (920 <= qcfPoints) {
            grade = "MM";
        } else if (880 <= qcfPoints) {
            grade = "MP";
        } else if (840 <= qcfPoints) {
            grade = "PP";
        } 
	// Assigns grade for EXTENDED DIPLOMA
    } else if (course == EXTENDED_DIPLOMA) {
        if (1590 <= qcfPoints) {
            grade = "D*D*D*";
        } else if (1560 <= qcfPoints) {
            grade = "D*D*D";
        } else if (1530 <= qcfPoints) {
            grade = "D*DD";
        } else if (1500 <= qcfPoints) {
            grade = "DDD";
        } else if (1460 <= qcfPoints) {
            grade = "DDM";
        } else if (1420 <= qcfPoints) {
            grade = "DMM";
        } else if (1380 <= qcfPoints) {
            grade = "MMM";
        } else if (1340 <= qcfPoints) {
            grade = "MMP";
        } else if (1300 <= qcfPoints) {
            grade = "MPP";
        } else if (1260 <= qcfPoints) {
            grade = "PPP";
        } 
    }
    
	// Converts the QCF points into a string 
    std::stringstream ss;
    ss << qcfPoints;
    std::string qcfPointsString;
    ss >> qcfPointsString;

	// Appends everything to the output string and prints it
    output += qcfPointsString;
    output += " QCF Points and a ";
    output += (std::string)grade;
    std::cout << output << std::endl;
}

// Allows the user to enter which course why are on
// Different courses have different QCF requirements
Course getCourse() {
    int input;
    std::cout << "Choose which type of course you are on by inputting the number next to your course type" << std::endl;
    std::cout << "[0] DIPLOMA" << std::endl;
    std::cout << "[1] EXTENDED DIPLOMA" << std::endl << std::endl;
    std::cout << "Course Type: ";
    
    std::cin >> input;
    Course course = (Course)input;
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
  
  // Calls calcate to get grades from QCF points and Course type
  calculate(userCourse, sum);

  
}