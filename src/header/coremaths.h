#ifndef CORE_MATHS
#define CORE_MATHS

/* Core mathematics qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 * All the core math certificates calculate to the same points per grade.
 * So only use CoreMathUCASGrade() to calculate for Core Maths.
 */

namespace CoreMaths {
    // Valid grades: A, B, C, D, E (= 20, 16, 12, 10, 6)
    int CoreMathsUCASGrade(char grade);
}

#endif
