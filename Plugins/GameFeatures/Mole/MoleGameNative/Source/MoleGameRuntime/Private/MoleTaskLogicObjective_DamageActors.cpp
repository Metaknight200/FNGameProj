#include "MoleTaskLogicObjective_DamageActors.h"

UMoleTaskLogicObjective_DamageActors::UMoleTaskLogicObjective_DamageActors() {
    this->bUsesAssociatedTaskActors = true;
    this->bOnlyCountDamageFromTaskOwner = true;
}

void UMoleTaskLogicObjective_DamageActors::OnPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UMoleTaskLogicObjective_DamageActors::OnBuildingActorDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


