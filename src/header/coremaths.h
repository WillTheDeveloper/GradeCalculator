#ifndef CORE_MATHS
#define CORE_MATHS

/* Core mathematics qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 * All of the UCAS valid core math certificates calculatte to the same points per grade.
 * So only use CoreMathUCASGrade() to calculate for Core Naths.
 */

namespace CoreMaths {
    // Valid grades: A, B, C, D, E (= 20, 16, 12, 10, 6)
    int CoreMathsUCASGrade(char grade);
}

#endif
