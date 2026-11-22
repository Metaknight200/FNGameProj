#include "FortCameraModeOverrideComponent.h"
#include "Net/UnrealNetwork.h"

UFortCameraModeOverrideComponent::UFortCameraModeOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraModeOverride = NULL;
}

void UFortCameraModeOverrideComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCameraModeOverrideComponent, CameraModeOverride);
}


