#include "FortPlayerClassSettingsComponent.h"
#include "Net/UnrealNetwork.h"

UFortPlayerClassSettingsComponent::UFortPlayerClassSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClassSlotIndex = 255;
}

void UFortPlayerClassSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerClassSettingsComponent, ClassSlotIndex);
}


