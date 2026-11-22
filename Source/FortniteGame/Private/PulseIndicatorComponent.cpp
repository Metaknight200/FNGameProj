#include "PulseIndicatorComponent.h"

UPulseIndicatorComponent::UPulseIndicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerPingSound = NULL;
    this->IndicatingController = NULL;
}

void UPulseIndicatorComponent::StopPulseMarkers() {
}

void UPulseIndicatorComponent::StartPulseMarkers() {
}

void UPulseIndicatorComponent::SetIndicatingController(AFortPlayerControllerAthena* Controller) {
}

void UPulseIndicatorComponent::SetDisplayTeam(uint8 NewDisplayTeam) {
}

bool UPulseIndicatorComponent::CanUseComponentIndicators() const {
    return false;
}


