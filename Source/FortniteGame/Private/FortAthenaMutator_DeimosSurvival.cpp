#include "FortAthenaMutator_DeimosSurvival.h"

AFortAthenaMutator_DeimosSurvival::AFortAthenaMutator_DeimosSurvival(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
}

void AFortAthenaMutator_DeimosSurvival::OnSafezoneChanged() {
}

void AFortAthenaMutator_DeimosSurvival::OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTag) {
}

void AFortAthenaMutator_DeimosSurvival::OnBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}


