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
    int Pearson90Diploma(std::string pts);
    int PearsonCertificate(std::string pts);
    int PearsonDiploma(std::string pts);
    int PearsonExtendedDiploma(std::string pts);
    int PearsonSubsidiaryDiploma(std::string pts);

    void Pearson90DiplomaGrades();
    void PearsonCertificateGrades();
    void PearsonDiplomaGrades();
    void PearsonExtendedDiplomaGrades();
    void PearsonSubsidiaryDiplomaGrades();
}



#endif
