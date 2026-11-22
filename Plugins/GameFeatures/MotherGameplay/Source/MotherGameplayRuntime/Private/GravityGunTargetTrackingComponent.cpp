#include "GravityGunTargetTrackingComponent.h"

UGravityGunTargetTrackingComponent::UGravityGunTargetTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UGravityGunTargetTrackingComponent::IsValidTarget(AActor* OwningPlayer, AActor* PotentialTarget, FGameplayTagContainer& ReasonForFailure) {
    return false;
}

bool UGravityGunTargetTrackingComponent::FindTargetProjectile(AActor* OwningPlayer, const FVector& TraceStart, const FVector& TraceEnd, float TargetingRadius) {
    return false;
}

void UGravityGunTargetTrackingComponent::FindTargetActor(AActor* OwningPlayer, const FVector& TraceStart, const FVector& TraceEnd) {
}


