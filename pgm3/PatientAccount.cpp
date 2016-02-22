#include "PatientAccount.h"
#include <iostream>
using namespace std;

PatientAccount::PatientAccount()
{
    totalCost = 0;
    daysStayed = 0;
    dayRate = 524.49;
    int opID,medID;
    cout << "Input a visit purpose/operation ID number to add to bill: "<< endl;
    cout << " ID :: Operation" << endl;
    cout << " ----------------" << endl;
    cout << " 0  :: Cyst Drain/Removal" << endl;
    cout << " 1  :: Tooth Removal" << endl;
    cout << " 2  :: Bronchitis Treatment" << endl;
    cout << " 3  :: Appendix Removal" << endl;
    cout << " 4  :: Radiation Therapy" << endl;
    cin >> opID;
    clientOperation.addOperation(opID,this);
    cout << endl;
/*
    ----------------------------------------
*/
    cout << "Select a prescribed medication ID to add to bill: "<< endl;
    cout << " ID :: Medication" << endl;
    cout << " ----------------" << endl;
    cout << " -Painkillers-" <<endl;
    cout << " 0  :: Oxycodone" << endl;
    cout << " 1  :: Tramadol" << endl;
    cout << " ----------------" << endl;
    cout << " -Antibiotics-" << endl;
    cout << " 2  :: Sulfatrim" << endl;
    cout << " 3  :: Vancocin HCl" << endl;
    cout << " ----------------" << endl;
    cout << " -Antineoplastons-" << endl;
    cout << " 4  :: Adriamycin" << endl;
    cin >> medID;
    clientPharmacy.addMedication(medID, this);
    cout << endl;

    cout << "Enter the number of days inpatient stayed at hospital: ";
    cin >> daysStayed;
    cout << endl;
    totalCost += dayRate*daysStayed;
}

void PatientAccount::checkoutPatient(){
    cout << "Duration of Stay: " << daysStayed << " days." << endl;
    cout << "Daily Inpatient Rate: $" << dayRate << "/day." << endl;

    cout << "Invoice: " << endl;
    cout << "\n   Cost of Operation" << endl;
    cout <<   "       $" << operationCost << endl;
    cout << "\n   Cost of Medication:" << endl;
    cout <<   "       $" << medicationCost << endl;
    cout << "\n   Cost of Stay:" << endl;
    cout <<   "       $" << dayRate*daysStayed<< endl;
    cout << "\n   Total:" << endl;
    cout <<   "       $" << totalCost << endl;
}
