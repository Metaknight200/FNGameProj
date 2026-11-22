#include "MoleTaskLogicAction_SetPlayerLeash.h"

UMoleTaskLogicAction_SetPlayerLeash::UMoleTaskLogicAction_SetPlayerLeash() {
    this->bUsesAssociatedTaskActors = true;
    this->bUsesActionRemovalPolicyBitmask = true;
    this->LeashType = EMoleTaskLeashType::DistanceFromActorLocation;
}


