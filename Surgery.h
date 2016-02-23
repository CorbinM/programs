/*
The Surgery class contains the cost of five types of surgery. 
It can update the charges variable of the PatientAccount class.
*/
#ifndef SURGERY_H
#define SURGERY_H
#include <vector>
using namespace std;

class PatientAccount; //Forward Declaration of PatientAccount Class

struct OpDetail{
    char* opName;
    float opCost;
};

class Surgery
{
    public:
        Surgery();
        void addOperation(int operationID,PatientAccount* account);

    private:
        vector<OpDetail> vecOperations;

};

#endif // SURGERY_H
