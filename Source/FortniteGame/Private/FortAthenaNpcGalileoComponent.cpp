#include "FortAthenaNpcGalileoComponent.h"

UFortAthenaNpcGalileoComponent::UFortAthenaNpcGalileoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedBotController = NULL;
    this->PossessedPawn = NULL;
}

void UFortAthenaNpcGalileoComponent::SetPatrolPath(const TArray<FVector>& NewPatrolPath) {
}

void UFortAthenaNpcGalileoComponent::SetCommunicationGroup(const TArray<AFortAthenaAIBotController*>& AIBotControllerList) {
}

void UFortAthenaNpcGalileoComponent::OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

TArray<FVector> UFortAthenaNpcGalileoComponent::GetPatrolPath() const {
    return TArray<FVector>();
}

TArray<AFortAthenaAIBotController*> UFortAthenaNpcGalileoComponent::GetCommunicationGroup() {
    return TArray<AFortAthenaAIBotController*>();
}


