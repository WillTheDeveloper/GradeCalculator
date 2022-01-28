#ifndef BTEC_RCF
#define BTEC_RCF
#include <string>

/* BTEC National (RQF) qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 *
 */

namespace BTECNationalRQF {
    int National540Diploma(std::string grade);
    int NationalCertificate(std::string grade);
    int NationalDiploma(std::string grade);
    int NationalExtendedCertificate(std::string grade);
    int NationalExtendedDiploma(std::string grade);
    int NationalFoundationDiploma(std::string grade);
}



#endif
