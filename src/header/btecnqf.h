#ifndef BTEC_NQF
#define BTEC_NQF
#include <string>

/* BTEC National (NQF) qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 *
 */

namespace BTECNationalNQF {
    int NationalAward(std::string grade);
    int NationalCertificate(std::string grade);
    int NationalDiploma(std::string grade);
}


#endif
