#include "FortUIInfoComponent.h"
#include "Net/UnrealNetwork.h"

UFortUIInfoComponent::UFortUIInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortUIInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortUIInfoComponent, LabelText);
    DOREPLIFETIME(UFortUIInfoComponent, DescriptionText);
    DOREPLIFETIME(UFortUIInfoComponent, TextureSoftPointer);
}


