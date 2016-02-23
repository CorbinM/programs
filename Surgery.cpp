/*
The implementation of Surgery.
Include prices of each operation. 
*/
#include "Surgery.h"
#include "PatientAccount.h"

Surgery::Surgery()
{
    OpDetail Op_cyst,Op_toothpull,Op_bronchitis,Op_appendix,Op_radiation;
    Op_cyst.opName = "Cyst Removal";	//operation name
    Op_cyst.opCost = 2000.00;			//operation cost

    
    Op_toothpull.opName = "Tooth Pull";
    Op_toothpull.opCost = 500.00;

    
    Op_bronchitis.opName = "Bronchitis Antibio";
    Op_bronchitis.opCost = 1250.00;

    
    Op_appendix.opName = "Appendix Removal";
    Op_appendix.opCost = 550.00;

    
    Op_radiation.opName = "Radiation";
    Op_radiation.opCost = 2500.00;

    vecOperations.push_back(Op_cyst);
    vecOperations.push_back(Op_toothpull);
    vecOperations.push_back(Op_bronchitis);
    vecOperations.push_back(Op_appendix);
    vecOperations.push_back(Op_radiation);
}

void Surgery::addOperation(int operationID,PatientAccount* account){
    account->operationCost += vecOperations[operationID].opCost;
    account->totalCost += vecOperations[operationID].opCost;
}
