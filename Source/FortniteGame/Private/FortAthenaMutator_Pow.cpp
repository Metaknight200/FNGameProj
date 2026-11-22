#include "FortAthenaMutator_Pow.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_Pow::AFortAthenaMutator_Pow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->bRespawningCurrentlyAllowed = true;
}

void AFortAthenaMutator_Pow::OnRep_RespawningCurrentlyAllowed() {
}

void AFortAthenaMutator_Pow::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

float AFortAthenaMutator_Pow::GetPlayerCurrentShield(AFortPlayerStateAthena* Player) const {
    return 0.0f;
}

void AFortAthenaMutator_Pow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Pow, PlayerData);
    DOREPLIFETIME(AFortAthenaMutator_Pow, bRespawningCurrentlyAllowed);
}


