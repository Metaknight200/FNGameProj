#include "FortAthenaMutator_BasicLimitedLives.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_BasicLimitedLives::AFortAthenaMutator_BasicLimitedLives(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->bAlwaysShowSquadInfo = false;
}

void AFortAthenaMutator_BasicLimitedLives::OnRep_LiveData() {
}

void AFortAthenaMutator_BasicLimitedLives::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_BasicLimitedLives, LiveData);
}


