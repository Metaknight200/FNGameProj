#include "FortLabradorComponent_Telemetry.h"

UFortLabradorComponent_Telemetry::UFortLabradorComponent_Telemetry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWasAwake = false;
    this->DespawnReason = ELabradorDespawnReason::Unknown;
    this->DamageReceivedFromPlayers = 0.00f;
}

void UFortLabradorComponent_Telemetry::OnWakeUp(AActor* GoalActor) {
}

void UFortLabradorComponent_Telemetry::OnTeleport() {
}

void UFortLabradorComponent_Telemetry::OnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


