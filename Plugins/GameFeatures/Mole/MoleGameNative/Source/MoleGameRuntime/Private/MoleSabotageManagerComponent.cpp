#include "MoleSabotageManagerComponent.h"
#include "Net/UnrealNetwork.h"

UMoleSabotageManagerComponent::UMoleSabotageManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoundStartCooldownEffect = NULL;
    this->RoundStartCooldownEffectForElimination = NULL;
    this->AfterUseCooldownEffect = NULL;
    this->SaboteurAbilitySet = NULL;
}

void UMoleSabotageManagerComponent::SendMoleSabotageTimerStartedEvent(const UMoleSabotageAbility* SabotageAbility, const FMoleTimerInfo& TimerInfo) {
}

void UMoleSabotageManagerComponent::SendMoleLightingModeChangeEvent(const UMoleSabotageAbility* SabotageAbility, const FMoleLightingMode& LightingMode) {
}

void UMoleSabotageManagerComponent::OnRep_CurrentSabotageStatus() {
}

void UMoleSabotageManagerComponent::OnRep_CurrentLightingMode() {
}

void UMoleSabotageManagerComponent::OnRep_ActiveSabotageTimerInfo() {
}

void UMoleSabotageManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMoleSabotageManagerComponent, CurrentSabotageStatus);
    DOREPLIFETIME(UMoleSabotageManagerComponent, ActiveSabotageTimerInfo);
    DOREPLIFETIME(UMoleSabotageManagerComponent, CurrentLightingMode);
}


