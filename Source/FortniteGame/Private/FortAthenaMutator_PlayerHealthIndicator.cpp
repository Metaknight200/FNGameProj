#include "FortAthenaMutator_PlayerHealthIndicator.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_PlayerHealthIndicator::AFortAthenaMutator_PlayerHealthIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->DisplayMode = EPlayerIndicatorDisplayMode::DontOverride;
}

void AFortAthenaMutator_PlayerHealthIndicator::OnRep_DisplayMode() {
}

void AFortAthenaMutator_PlayerHealthIndicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_PlayerHealthIndicator, DisplayMode);
}


