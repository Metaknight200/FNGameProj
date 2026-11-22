#include "FortAthenaMutator_ShouldDestroyActorsOnPlacement.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_ShouldDestroyActorsOnPlacement::AFortAthenaMutator_ShouldDestroyActorsOnPlacement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bShouldDestroyOnPlacement = true;
}

void AFortAthenaMutator_ShouldDestroyActorsOnPlacement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_ShouldDestroyActorsOnPlacement, bShouldDestroyOnPlacement);
}


