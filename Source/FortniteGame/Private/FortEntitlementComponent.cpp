#include "FortEntitlementComponent.h"
#include "Net/UnrealNetwork.h"

UFortEntitlementComponent::UFortEntitlementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortEntitlementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortEntitlementComponent, Entitlements);
}


