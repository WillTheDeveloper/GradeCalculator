#ifndef T_LEVEL
#define T_LEVEL
#include <string>

/* T Level qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 * Use TLevelUCASGrade() to calculate for T level.
 * T level accepts two passes P(H) is a higher pass and P(L) is a lower pass.
 * The passes equite to different values, make sure users are inputting the correct type of pass.
 */


namespace TLevel {
    // Valid grades: D*, D, M, P(H), P(L) (= 168, 144, 120, 96, 72)
    int TLevelUCASGrade(std::string grade);
}

#endif
