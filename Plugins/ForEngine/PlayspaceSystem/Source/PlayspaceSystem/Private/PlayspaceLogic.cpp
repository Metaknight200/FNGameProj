#include "PlayspaceLogic.h"
#include "Net/UnrealNetwork.h"

APlayspaceLogic::APlayspaceLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Playspace = NULL;
    this->bAutoStartMatchOnServerStart = true;
    this->bMatchHasEnded = false;
    this->MatchStartTime = 0.00f;
}

void APlayspaceLogic::OnRep_MatchStartTime() {
}

void APlayspaceLogic::OnRep_bMatchHasEnded() {
}

void APlayspaceLogic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayspaceLogic, bMatchHasEnded);
    DOREPLIFETIME(APlayspaceLogic, MatchStartTime);
}


