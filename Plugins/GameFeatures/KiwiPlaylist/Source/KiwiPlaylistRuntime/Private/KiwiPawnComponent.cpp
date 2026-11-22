#include "KiwiPawnComponent.h"

UKiwiPawnComponent::UKiwiPawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawSquadMateOutlineThroughWalls = false;
    this->PlayerMoveInGoopNiagaraSystem = NULL;
    this->PlayerSplashInGoopNiagaraSystem = NULL;
}




