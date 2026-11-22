#include "FortCurieToggleComponent.h"

UFortCurieToggleComponent::UFortCurieToggleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationBehavior = EFortCurieToggleComponentActivationBehavior::OnValidAttachment;
    this->DeactivationBehavior = EFortCurieToggleComponentDeactivationBehavior::NeverDeactivate;
    this->DeactivationTime = 0.00f;
}

void UFortCurieToggleComponent::OnInactive_Implementation() {
}

void UFortCurieToggleComponent::OnElementDetached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnElementAttached(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnElementApplied(UObject* InOwner, FCurieContainerHandle ContainerHandle, const FGameplayTag& ElementIdentifier) {
}

void UFortCurieToggleComponent::OnActive_Implementation() {
}


