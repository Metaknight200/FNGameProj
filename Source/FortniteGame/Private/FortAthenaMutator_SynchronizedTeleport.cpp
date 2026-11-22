#include "FortAthenaMutator_SynchronizedTeleport.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_SynchronizedTeleport::AFortAthenaMutator_SynchronizedTeleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
    this->HidePawnGameplayEffectClass = NULL;
    this->CustomTeleportPlayerComponentClass = NULL;
    this->bAutoEquipPickAxe = true;
    this->bTeleportComplete = true;
}

void AFortAthenaMutator_SynchronizedTeleport::OnRep_TeleportComplete() {
}

void AFortAthenaMutator_SynchronizedTeleport::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SynchronizedTeleport, InProgressTeleportPlayerIDs);
    DOREPLIFETIME(AFortAthenaMutator_SynchronizedTeleport, bTeleportComplete);
}


