#include "FortCreativeVolumeLinkComponent.h"
#include "Net/UnrealNetwork.h"

UFortCreativeVolumeLinkComponent::UFortCreativeVolumeLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkedVolume = NULL;
    this->bShouldFindVolumeAtStart = true;
}

void UFortCreativeVolumeLinkComponent::OnRep_LinkedVolume() {
}

void UFortCreativeVolumeLinkComponent::OnLinkedVolumeSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

AFortVolume* UFortCreativeVolumeLinkComponent::GetLinkedVolume() {
    return LinkedVolume;
}

void UFortCreativeVolumeLinkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCreativeVolumeLinkComponent, LinkedVolume);
}


