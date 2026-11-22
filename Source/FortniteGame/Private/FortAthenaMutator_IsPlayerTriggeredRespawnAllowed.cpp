#include "FortAthenaMutator_IsPlayerTriggeredRespawnAllowed.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed::AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bIsPlayerTriggeredRespawnAllowed = true;
}

void AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed, bIsPlayerTriggeredRespawnAllowed);
}


