#ifndef A_LEVEL
#define A_LEVEL

#include "string"

/* A Level qualifications library
 *
 * On Error, the function will return a -1 (int).
 */

namespace ALevel {
    int ALevel(std::string pts);
    int ALevelNineUnitAward(std::string pts);
    int ALevelDoubleAward(std::string pts);
    int ASLevel(std::string pts);
    int ASLevelDoubleAward(std::string pts);
}

#endif
