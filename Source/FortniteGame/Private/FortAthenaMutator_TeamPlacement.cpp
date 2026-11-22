#include "FortAthenaMutator_TeamPlacement.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_TeamPlacement::AFortAthenaMutator_TeamPlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_TeamPlacement::OnRep_TeamsInfo() {
}

void AFortAthenaMutator_TeamPlacement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_TeamPlacement, TeamsInfo);
}


