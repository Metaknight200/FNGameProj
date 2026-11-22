#include "FortAthenaMutator_GameStartCountdown.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_GameStartCountdown::AFortAthenaMutator_GameStartCountdown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->CountdownMusicStinger = NULL;
    this->bCountdownTimerRunning = false;
}

void AFortAthenaMutator_GameStartCountdown::OnRep_CountdownTimerRunning() {
}

void AFortAthenaMutator_GameStartCountdown::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_GameStartCountdown, bCountdownTimerRunning);
}


