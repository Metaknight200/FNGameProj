#include "SpecialEventPhase.h"
#include "Net/UnrealNetwork.h"

ASpecialEventPhase::ASpecialEventPhase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bApplyGameplayEffects = false;
    this->CameraModifierToApply = NULL;
    this->bRemoveModifierOnPhaseDeactivation = true;
    this->bRemoveGameplayEffects = false;
    this->AppliedCameraModifier = NULL;
    this->PhaseState = ESpecialEventPhaseState::Unregistered;
}

void ASpecialEventPhase::SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements) {
}


void ASpecialEventPhase::OnRep_PhaseState() {
}

void ASpecialEventPhase::OnPhaseFinished() {
}





FGameplayTag ASpecialEventPhase::GetPhaseTag() const {
    return FGameplayTag{};
}

void ASpecialEventPhase::DebugActivatePhase() {
}

void ASpecialEventPhase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpecialEventPhase, PhaseState);
}


