#include "FortMinigameProgressComponent.h"
#include "Net/UnrealNetwork.h"

UFortMinigameProgressComponent::UFortMinigameProgressComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationTime = 0.00f;
}

void UFortMinigameProgressComponent::StartProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::RevertProgress(APlayerState* PlayerState) {
}

bool UFortMinigameProgressComponent::HasActivationTime() const {
    return false;
}

void UFortMinigameProgressComponent::FinishProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::AbortProgress(APlayerState* PlayerState) {
}

void UFortMinigameProgressComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameProgressComponent, ActivationTime);
}


