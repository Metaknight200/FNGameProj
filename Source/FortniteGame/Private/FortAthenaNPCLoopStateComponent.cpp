#include "FortAthenaNPCLoopStateComponent.h"
#include "Net/UnrealNetwork.h"

UFortAthenaNPCLoopStateComponent::UFortAthenaNPCLoopStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnOutsideTheLoop = false;
    this->RuntimeLoopSettings = NULL;
}

void UFortAthenaNPCLoopStateComponent::OnOwnerPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


void UFortAthenaNPCLoopStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaNPCLoopStateComponent, bSpawnOutsideTheLoop);
}


