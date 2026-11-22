#include "FortAIComponent_Telemetry.h"

UFortAIComponent_Telemetry::UFortAIComponent_Telemetry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PossessedPawn = NULL;
    this->CachedAIController = NULL;
    this->DeathInstigator = NULL;
    this->AnalyticRuntimeParameters = NULL;
}

void UFortAIComponent_Telemetry::OnTetheredFollowerChanged(AFortPawn* NewFollower, AFortPawn* OldFollower) {
}

void UFortAIComponent_Telemetry::OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortAIComponent_Telemetry::OnDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


