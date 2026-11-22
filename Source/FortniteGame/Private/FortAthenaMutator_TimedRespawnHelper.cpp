#include "FortAthenaMutator_TimedRespawnHelper.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_TimedRespawnHelper::AFortAthenaMutator_TimedRespawnHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->ServerTimeRespawnIsDisallowed = -1.00f;
}

void AFortAthenaMutator_TimedRespawnHelper::OnRep_ServerTimeRespawnIsDisallowed() {
}

void AFortAthenaMutator_TimedRespawnHelper::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_TimedRespawnHelper::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_TimedRespawnHelper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_TimedRespawnHelper, ServerTimeRespawnIsDisallowed);
}


