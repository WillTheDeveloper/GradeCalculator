#ifndef A_LEVEL
#define A_LEVEL

#include "string"
#include <iostream>

/* A Level qualifications library
 *
 * On Error, the function will return a -1 (int).
 */

namespace ALevelN {
    // Valid grades: A*, A, B, C, D, E (= 56, 16, 12, 10, 6)
    int ALevel(std::string pts);

    // Valid grades: A*A, AA, AB, BB, BC, CC, CD, DD, DE, EE
    // (= 76, 68, 64, 56, 52, 44, 42, 34, 30, 22)
    int ALevelNineUnitAward(std::string pts);

    // Valid grades: A*A, AA, AB, BB, BC, CC, CD, DD, DE, EE
    // (= 112, 104, 96, 80, 72, 64, 56, 48, 40, 32)
    int ALevelDoubleAward(std::string pts);

    // Valid grades: A, B, C, D, E
    // (= 20, 16, 12, 10, 6)
    int ASLevel(std::string pts);

    // Valid grades: AA, AB, BB, BC, CC, CD, DD, DE, EE
    // (= 40, 36, 32, 28, 24, 22, 20, 16, 12
    int ASLevelDoubleAward(std::string pts);
}

#endif
