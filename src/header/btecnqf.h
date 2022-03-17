#ifndef BTEC_NQF
#define BTEC_NQF
#include <string>
#include <iostream>
#include <ctime>

/* BTEC National (NQF) qualification library
 *
 * On Exception/Error, the function will return a -1 (int).
 *
 *
 */

namespace BTECNationalNQF {
    // Valid grades: D, M, P (= 48, 32, 32)
    int NationalAward(std::string grade);
    // Valid grades: DD, DM, MM, MP, PP (= 96, 80, 64, 48, 32)
    int NationalCertificate(std::string grade);
    // Valid grades: DDD, DDM, DMM, MMM, MMP, MPP, PPP (= 144, 128, 112, 96, 80, 64, 48, 32)
    int NationalDiploma(std::string grade);


    void NationalAwardGrades();
    void NationalCertificateGrades();
    void NationalDiplomaGrades();
}


#endif
