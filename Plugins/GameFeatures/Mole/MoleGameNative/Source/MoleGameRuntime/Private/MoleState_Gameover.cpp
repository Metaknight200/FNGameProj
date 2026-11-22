#include "MoleState_Gameover.h"
#include "Net/UnrealNetwork.h"

UMoleState_Gameover::UMoleState_Gameover() {
    this->bReplicates = true;
}

void UMoleState_Gameover::OnRep_MoleStateGameOverEventData() {
}

void UMoleState_Gameover::OnRep_ImposterPlayerStates() {
}

void UMoleState_Gameover::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleState_Gameover, MoleStateGameOverEventData);
    DOREPLIFETIME(UMoleState_Gameover, ImposterPlayerStates);
}


