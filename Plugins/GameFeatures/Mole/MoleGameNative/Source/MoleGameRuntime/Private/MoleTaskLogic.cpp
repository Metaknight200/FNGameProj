#include "MoleTaskLogic.h"
#include "Net/UnrealNetwork.h"

UMoleTaskLogic::UMoleTaskLogic() {
    this->ParentTaskAsset = NULL;
    this->CurrentTaskPhase = -1;
    this->bPhaseChangeInProgress = false;
    this->bHasBeenInitialized = false;
    this->bIsPrimaryActiveTask = false;
}

void UMoleTaskLogic::OnRep_ParentTaskHandle() {
}

void UMoleTaskLogic::OnRep_ParentTaskAsset() {
}

void UMoleTaskLogic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleTaskLogic, ParentTaskAsset);
    DOREPLIFETIME(UMoleTaskLogic, ParentTaskHandle);
}


