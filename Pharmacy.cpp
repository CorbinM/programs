/*
The implementation of Pharmacy.
Include prices of each medication. 
*/
#include "Pharmacy.h"
#include "PatientAccount.h"

Pharmacy::Pharmacy()
{
    Prescription Rx_Pain_1,Rx_Pain_2,Rx_Antibiotic_1,Rx_Antibiotic_2,Rx_CancerTreatment;
    //typical pain killer
    Rx_Pain_1.Name = "Oxycodone";
    Rx_Pain_1.Cost = 20.00;

    //another typical pain killer
    Rx_Pain_2.Name = "Tramadol";
    Rx_Pain_2.Cost = 20.00;

    //general antibiotic for sensitive bacteria
    Rx_Antibiotic_1.Name = "Sulfatrim";
    Rx_Antibiotic_1.Cost = 6.00;

    //for severe infections and/or for penicillin allergies
    Rx_Antibiotic_2.Name = "Vancocin HCl";
    Rx_Antibiotic_2.Cost = 550.00;

    //for chemotherapy treatments
    Rx_CancerTreatment.Name = "Adriamycin";
    Rx_CancerTreatment.Cost = 60.00;

    vecPrescription.push_back(Rx_Pain_1);
    vecPrescription.push_back(Rx_Pain_2);
    vecPrescription.push_back(Rx_Antibiotic_1);
    vecPrescription.push_back(Rx_Antibiotic_2);
    vecPrescription.push_back(Rx_CancerTreatment);
}

void Pharmacy::addMedication(int medicationID, PatientAccount* account){
    account->medicationCost += vecPrescription[medicationID].Cost;
    account->totalCost += vecPrescription[medicationID].Cost;
}
