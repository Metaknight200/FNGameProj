#include "MoleStateMachine.h"
#include "Net/UnrealNetwork.h"

UMoleStateMachine::UMoleStateMachine() {
    this->bReplicates = true;
    this->bPubliclyBroadcast = true;
    this->MolePlayerStateComponentClass = NULL;
    this->RemainingSaboteurs = 0;
    this->StartOfMatchPlayerCount = 0;
}

int32 UMoleStateMachine::GetMoleStartOfMatchPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

int32 UMoleStateMachine::GetMoleRemainingSaboteurCount(UObject* WorldContextObject) {
    return 0;
}

void UMoleStateMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleStateMachine, MoleStateGameOverEventData);
    DOREPLIFETIME(UMoleStateMachine, RemainingSaboteurs);
    DOREPLIFETIME(UMoleStateMachine, StartOfMatchPlayerCount);
}


