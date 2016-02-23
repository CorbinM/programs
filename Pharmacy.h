/*
The Pharmacy class contains the prices of five types of medication. 
It can update the charges variable of the PatientAccount class.
*/
#ifndef PHARMACY_H
#define PHARMACY_H
#include <vector>
using namespace std;

class PatientAccount; //Forward Declaration of PatientAccount Class

struct Prescription{
    char* Name;
    float Cost;
};

class Pharmacy
{
    public:
        Pharmacy();
        void addMedication(int medicationID, PatientAccount* account);

    private:
        vector<Prescription> vecPrescription;
};

#endif // PHARMACY_H
