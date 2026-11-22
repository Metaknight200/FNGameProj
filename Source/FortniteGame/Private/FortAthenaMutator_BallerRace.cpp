#include "FortAthenaMutator_BallerRace.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_BallerRace::AFortAthenaMutator_BallerRace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->ServerWorldTimeToStartRace = -1.00f;
}

void AFortAthenaMutator_BallerRace::OnRep_ServerWorldTimeToStartRace() {
}

void AFortAthenaMutator_BallerRace::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_BallerRace::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_BallerRace::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_BallerRace, ServerWorldTimeToStartRace);
}


