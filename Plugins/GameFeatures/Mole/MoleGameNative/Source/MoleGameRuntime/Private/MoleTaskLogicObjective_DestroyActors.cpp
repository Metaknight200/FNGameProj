#include "MoleTaskLogicObjective_DestroyActors.h"

UMoleTaskLogicObjective_DestroyActors::UMoleTaskLogicObjective_DestroyActors() {
    this->bUsesAssociatedTaskActors = true;
}

void UMoleTaskLogicObjective_DestroyActors::OnPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UMoleTaskLogicObjective_DestroyActors::OnGenericActorDestroyed(AActor* DestroyedActor) {
}

void UMoleTaskLogicObjective_DestroyActors::OnBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


