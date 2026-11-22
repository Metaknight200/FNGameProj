#include "CreativeMoveToolStateComponent.h"
#include "Net/UnrealNetwork.h"

UCreativeMoveToolStateComponent::UCreativeMoveToolStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPreview = false;
}

void UCreativeMoveToolStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativeMoveToolStateComponent, bPreview);
}


