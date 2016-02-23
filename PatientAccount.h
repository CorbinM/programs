/*
PatientAccount class keeps a total of the patient's charges. 
It will also keep track of the number of days spent in the hospital.
*/
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

#include "Pharmacy.h"
#include "Surgery.h"


class PatientAccount
{
    private:
        Surgery clientOperation;
        Pharmacy clientPharmacy;
        float dayRate;
        float daysStayed;
        float totalCost;
        float medicationCost;
        float operationCost;
        friend void Surgery::addOperation(int operationID,PatientAccount*);
        friend void Pharmacy::addMedication(int medicationID,PatientAccount*);
    public:
        PatientAccount();
        void checkoutPatient(); //prints invoice to console
};

#endif // PATIENTACCOUNT_H
