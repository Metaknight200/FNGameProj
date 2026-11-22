#include "FortPawnComponent_Disguise.h"

UFortPawnComponent_Disguise::UFortPawnComponent_Disguise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedAIDisguiseParameters = NULL;
    this->CachedNPCBehaviorParameters = NULL;
    this->PlayerDetectedTimestamp = 0.00f;
    this->RevealPlayerProximityDuration = 0.00f;
    this->AffiliationManager = NULL;
}

void UFortPawnComponent_Disguise::RevealDisguise(const AActor* RevealInstigator, EFortPawnComponent_DisguiseRevealReason RevealReason) {
}

void UFortPawnComponent_Disguise::OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool UFortPawnComponent_Disguise::CanBeRevealed() const {
    return false;
}


