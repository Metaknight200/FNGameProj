#include "FortAthenaMutator_LoadoutSwap.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_LoadoutSwap::AFortAthenaMutator_LoadoutSwap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->GamePhaseToStart = EAthenaGamePhase::Aircraft;
    this->bRandomizeLoadOuts = true;
    this->ServerWorldTimeOfNextSwap = -1.00f;
}

void AFortAthenaMutator_LoadoutSwap::OnRep_ServerWorldTimeOfNextSwap() {
}

void AFortAthenaMutator_LoadoutSwap::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_LoadoutSwap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_LoadoutSwap, ServerWorldTimeOfNextSwap);
    DOREPLIFETIME(AFortAthenaMutator_LoadoutSwap, NextItemsToGrant);
    DOREPLIFETIME(AFortAthenaMutator_LoadoutSwap, ItemsWithInfiniteAmmo);
}


