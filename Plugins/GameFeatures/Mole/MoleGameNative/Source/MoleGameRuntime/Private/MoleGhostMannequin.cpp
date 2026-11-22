#include "MoleGhostMannequin.h"

AMoleGhostMannequin::AMoleGhostMannequin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GhostMaterial = NULL;
    this->RepresentedPlayerState = NULL;
}


APlayerState* AMoleGhostMannequin::GetRepresentedPlayer() const {
    return NULL;
}


