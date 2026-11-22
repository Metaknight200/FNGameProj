#include "FortStormShieldComponent.h"
#include "Net/UnrealNetwork.h"

UFortStormShieldComponent::UFortStormShieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCareAboutEdgeOfStorm = false;
    this->bDisabled = false;
    this->DistanceFromEdgeOfStormShield = 0.30f;
}

void UFortStormShieldComponent::StormShieldDestroyed(AActor* DestroyedActor) {
}

void UFortStormShieldComponent::StormShieldCreated(AFortMissionStormShield* Shield) {
}

void UFortStormShieldComponent::OwnerDestroyed(AActor* InOwner) {
}

void UFortStormShieldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortStormShieldComponent, bCareAboutEdgeOfStorm);
}


