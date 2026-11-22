#include "FortPawnSpinParamsObj.h"
#include "Net/UnrealNetwork.h"

UFortPawnSpinParamsObj::UFortPawnSpinParamsObj() {
    this->bReplicatedFlag = false;
}

UFortPawnSpinParamsObj* UFortPawnSpinParamsObj::BP_CreateFortPawnSpinParamsObjInstance(UObject* WorldContextObject) {
    return NULL;
}

void UFortPawnSpinParamsObj::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPawnSpinParamsObj, bReplicatedFlag);
}


