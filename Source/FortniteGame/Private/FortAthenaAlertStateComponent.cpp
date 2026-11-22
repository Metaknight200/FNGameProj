#include "FortAthenaAlertStateComponent.h"
#include "Net/UnrealNetwork.h"

UFortAthenaAlertStateComponent::UFortAthenaAlertStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StealthMeterTarget = 1.00f;
    this->StealthMeterTargetTime = 0.00f;
}

void UFortAthenaAlertStateComponent::SetStealthMeterTargetTime(const float InStealthMeterTargetTime) {
}

void UFortAthenaAlertStateComponent::SetStealthMeterTarget(const float InStealthMeterTarget) {
}

void UFortAthenaAlertStateComponent::OnStealthMeterChanged(AFortAthenaAIBotController* BotController, float NewStealthMeterTarget, float NewStealthMeterTargetTime) {
}

float UFortAthenaAlertStateComponent::GetStealthMeterTargetTime() const {
    return StealthMeterTargetTime;
}

float UFortAthenaAlertStateComponent::GetStealthMeterTarget() const {
    return StealthMeterTarget;
}

void UFortAthenaAlertStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaAlertStateComponent, StealthMeterTarget);
    DOREPLIFETIME(UFortAthenaAlertStateComponent, StealthMeterTargetTime);
}


