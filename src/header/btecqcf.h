#ifndef BTEC_QCF
#define BTEC_QCF
#include <string>

/* BTEC National (QCF) qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 *
 */

namespace BTECNationalQCF {
    int Pearson90Diploma(std::string grade);
    int PearsonCertificate(std::string grade);
    int PearsonDiploma(std::string grade);
    int PearsonExtendedDiploma(std::string grade);
    int PearsonSubsidiaryDiploma(std::string grade);
}



#endif
