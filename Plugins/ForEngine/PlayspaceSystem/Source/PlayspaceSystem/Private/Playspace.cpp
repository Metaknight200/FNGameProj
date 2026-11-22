#include "Playspace.h"
#include "Net/UnrealNetwork.h"

APlayspace::APlayspace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bAutoStartMatchOnServerStart = true;
    this->PlayspaceManagerCached = NULL;
    this->BoundGameplayVolume = NULL;
    this->bIsInitialized = false;
    this->bMatchHasEnded = false;
    this->MatchStartTime = 0.00f;
}

void APlayspace::OnRep_PlayspaceUsers() {
}

void APlayspace::OnRep_MatchStartTime() {
}

void APlayspace::OnRep_bMatchHasEnded() {
}

void APlayspace::OnRep_bIsInitialized() {
}

void APlayspace::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayspace, PlayspaceUsers);
    DOREPLIFETIME(APlayspace, ChildPlayspaces);
    DOREPLIFETIME(APlayspace, BoundGameplayVolume);
    DOREPLIFETIME(APlayspace, bIsInitialized);
    DOREPLIFETIME(APlayspace, bMatchHasEnded);
    DOREPLIFETIME(APlayspace, MatchStartTime);
}


